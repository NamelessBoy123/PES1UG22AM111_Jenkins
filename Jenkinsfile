
pipeline {
    agent any  // Runs on any available agent

    stages {
        stage('Build') {
            steps {
                echo 'Building the application...'
                sh 'PES1UG22AM113 main.cpp'  // Replace with actual build command
            }
        }

        stage('Test') {
            steps {
                echo 'Running tests...'
                sh 'PES1UG22AM113'  // Replace with actual test command
            }
        }

        stage('Deploy') {
            steps {
                echo 'Deploying the application...'
                sh 'make deploy'  // Replace with actual deploy command
            }
        }
    }

    post {
        success {
            echo 'Pipeline executed successfully!'
        }
        
        failure {
            echo '🚨 Pipeline Failed!'
        }
    }
}
