import React,{useState} from 'react'
import './Login.css'

const Login = () => {

  const [isLogin,setIsLogin] = useState(0)

  return (
    <div>
      <nav>
        <li>Navigation</li>
        <button className='btn' onClick={()=> setIsLogin(!isLogin)}> { isLogin ? "Logout" : "Login" }</button>
      </nav>

      <section>
        <p> { isLogin ? "Private Views" : "Public Views" }</p>
      </section>

      <footer>
        <li>Footer</li>
      </footer>
    </div>
  )
}

export default Login
