pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                sh 'g++ -o app main.cpp'  // Compile C++ file
            }
        }
        stage('Test') {
            steps {
                sh './app'  // Run the compiled app
            }
        }
        stage('Deploy') {
            steps {
                echo '🚀 Deployment Done!'
            }
        }
    }
    post {
        failure {
            echo '🚨 Pipeline Failed!'
        }
    }
}
