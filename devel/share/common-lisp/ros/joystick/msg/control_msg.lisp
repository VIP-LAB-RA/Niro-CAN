; Auto-generated. Do not edit!


(cl:in-package joystick-msg)


;//! \htmlinclude control_msg.msg.html

(cl:defclass <control_msg> (roslisp-msg-protocol:ros-message)
  ((EPS_en
    :reader EPS_en
    :initarg :EPS_en
    :type cl:fixnum
    :initform 0)
   (ControlSW
    :reader ControlSW
    :initarg :ControlSW
    :type cl:fixnum
    :initform 0)
   (EPS_Interval
    :reader EPS_Interval
    :initarg :EPS_Interval
    :type cl:fixnum
    :initform 0)
   (SCC_En
    :reader SCC_En
    :initarg :SCC_En
    :type cl:fixnum
    :initform 0)
   (AEB_Act
    :reader AEB_Act
    :initarg :AEB_Act
    :type cl:fixnum
    :initform 0)
   (AEB_decel_value
    :reader AEB_decel_value
    :initarg :AEB_decel_value
    :type cl:fixnum
    :initform 0)
   (Alive_count
    :reader Alive_count
    :initarg :Alive_count
    :type cl:fixnum
    :initform 0)
   (SCC_value
    :reader SCC_value
    :initarg :SCC_value
    :type cl:float
    :initform 0.0)
   (EPS_value
    :reader EPS_value
    :initarg :EPS_value
    :type cl:float
    :initform 0.0))
)

(cl:defclass control_msg (<control_msg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <control_msg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'control_msg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name joystick-msg:<control_msg> is deprecated: use joystick-msg:control_msg instead.")))

(cl:ensure-generic-function 'EPS_en-val :lambda-list '(m))
(cl:defmethod EPS_en-val ((m <control_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader joystick-msg:EPS_en-val is deprecated.  Use joystick-msg:EPS_en instead.")
  (EPS_en m))

(cl:ensure-generic-function 'ControlSW-val :lambda-list '(m))
(cl:defmethod ControlSW-val ((m <control_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader joystick-msg:ControlSW-val is deprecated.  Use joystick-msg:ControlSW instead.")
  (ControlSW m))

(cl:ensure-generic-function 'EPS_Interval-val :lambda-list '(m))
(cl:defmethod EPS_Interval-val ((m <control_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader joystick-msg:EPS_Interval-val is deprecated.  Use joystick-msg:EPS_Interval instead.")
  (EPS_Interval m))

(cl:ensure-generic-function 'SCC_En-val :lambda-list '(m))
(cl:defmethod SCC_En-val ((m <control_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader joystick-msg:SCC_En-val is deprecated.  Use joystick-msg:SCC_En instead.")
  (SCC_En m))

(cl:ensure-generic-function 'AEB_Act-val :lambda-list '(m))
(cl:defmethod AEB_Act-val ((m <control_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader joystick-msg:AEB_Act-val is deprecated.  Use joystick-msg:AEB_Act instead.")
  (AEB_Act m))

(cl:ensure-generic-function 'AEB_decel_value-val :lambda-list '(m))
(cl:defmethod AEB_decel_value-val ((m <control_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader joystick-msg:AEB_decel_value-val is deprecated.  Use joystick-msg:AEB_decel_value instead.")
  (AEB_decel_value m))

(cl:ensure-generic-function 'Alive_count-val :lambda-list '(m))
(cl:defmethod Alive_count-val ((m <control_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader joystick-msg:Alive_count-val is deprecated.  Use joystick-msg:Alive_count instead.")
  (Alive_count m))

(cl:ensure-generic-function 'SCC_value-val :lambda-list '(m))
(cl:defmethod SCC_value-val ((m <control_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader joystick-msg:SCC_value-val is deprecated.  Use joystick-msg:SCC_value instead.")
  (SCC_value m))

(cl:ensure-generic-function 'EPS_value-val :lambda-list '(m))
(cl:defmethod EPS_value-val ((m <control_msg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader joystick-msg:EPS_value-val is deprecated.  Use joystick-msg:EPS_value instead.")
  (EPS_value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <control_msg>) ostream)
  "Serializes a message object of type '<control_msg>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'EPS_en)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ControlSW)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'EPS_Interval)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'SCC_En)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'AEB_Act)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'AEB_decel_value)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Alive_count)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'SCC_value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'EPS_value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <control_msg>) istream)
  "Deserializes a message object of type '<control_msg>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'EPS_en)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ControlSW)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'EPS_Interval)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'SCC_En)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'AEB_Act)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'AEB_decel_value)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'Alive_count)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'SCC_value) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'EPS_value) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<control_msg>)))
  "Returns string type for a message object of type '<control_msg>"
  "joystick/control_msg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'control_msg)))
  "Returns string type for a message object of type 'control_msg"
  "joystick/control_msg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<control_msg>)))
  "Returns md5sum for a message object of type '<control_msg>"
  "4e1b84ccf5a5c6a0e362e2cdfaeae72d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'control_msg)))
  "Returns md5sum for a message object of type 'control_msg"
  "4e1b84ccf5a5c6a0e362e2cdfaeae72d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<control_msg>)))
  "Returns full string definition for message of type '<control_msg>"
  (cl:format cl:nil "uint8 EPS_en~%uint8 ControlSW~%uint8 EPS_Interval~%uint8 SCC_En~%uint8 AEB_Act~%uint8 AEB_decel_value~%uint8 Alive_count~%float32 SCC_value~%float32 EPS_value~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'control_msg)))
  "Returns full string definition for message of type 'control_msg"
  (cl:format cl:nil "uint8 EPS_en~%uint8 ControlSW~%uint8 EPS_Interval~%uint8 SCC_En~%uint8 AEB_Act~%uint8 AEB_decel_value~%uint8 Alive_count~%float32 SCC_value~%float32 EPS_value~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <control_msg>))
  (cl:+ 0
     1
     1
     1
     1
     1
     1
     1
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <control_msg>))
  "Converts a ROS message object to a list"
  (cl:list 'control_msg
    (cl:cons ':EPS_en (EPS_en msg))
    (cl:cons ':ControlSW (ControlSW msg))
    (cl:cons ':EPS_Interval (EPS_Interval msg))
    (cl:cons ':SCC_En (SCC_En msg))
    (cl:cons ':AEB_Act (AEB_Act msg))
    (cl:cons ':AEB_decel_value (AEB_decel_value msg))
    (cl:cons ':Alive_count (Alive_count msg))
    (cl:cons ':SCC_value (SCC_value msg))
    (cl:cons ':EPS_value (EPS_value msg))
))