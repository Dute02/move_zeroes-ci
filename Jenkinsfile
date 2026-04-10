pipeline {
  agent any

  stages {
    stage('Checkout') {
      steps { checkout scm }
    }

    stage('Build') {
      steps {
        bat 'gcc Move_Zeroes.c -o main.exe'
      }
    }

    stage('Test') {
      steps {
        powershell '''
          $expected = "Output: [1, 3, 12, 2, 4, 12, 23, 2, 1, 5, 0, 0, 0, 0, 0, 0]"
          $actual = (./main.exe).Trim()
          if ($actual -ne $expected) {
            Write-Host "Expected: $expected"
            Write-Host "Actual  : $actual"
            throw "Test failed"
          }
        '''
      }
    }

    stage('Archive') {
      steps {
        archiveArtifacts artifacts: 'main.exe', fingerprint: true
      }
    }
  }
}
