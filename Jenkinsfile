pipeline {
  agent any
  stages {
    stage('tt') {
      parallel {
        stage('tt') {
          steps {
            ws(dir: '/app') {
              build 'it_is_name'
              catchError()
            }
            
          }
        }
        stage('tt2') {
          steps {
            echo 'hello'
          }
        }
      }
    }
    stage('yy') {
      steps {
        sleep 30
      }
    }
  }
  environment {
    complier = 'g++'
    cflag = '-std=c++11 -lgtest -lpthread'
  }
}