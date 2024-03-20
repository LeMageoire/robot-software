<center>
    <h1>
        CVRA's Robotics CAN Ecosystem
    </h1>
    <span>
      <font size="4">
        <em>
            An open-source panoply of UAVCAN connected boards to enable smart<br>
            sensors and actuators for modular robotics development
        </em>
    </font>
    </span>
</center>


<div class="album">
<div class="row">
    <div class="large-6 columns container">
        <a href="../motor">
            <img src="../images/motor-board.jpg" class="image">
            <div class="overlay">
                <div class="text">Motor board</div>
            </div>
        </a>
    </div>
    <div class="large-6 columns container">
        <a href="../io">
            <img src="../images/io-board.jpg" class="image">
            <div class="overlay">
                <div class="text">IO board</div>
            </div>
        </a>
    </div>
</div>
<div class="row">
    <div class="large-6 columns container">
        <a href="../sensor">
            <img src="../images/sensor-board.jpg" class="image">
            <div class="overlay">
                <div class="text">Sensor board</div>
            </div>
        </a>
    </div>
    <div class="large-6 columns container">
        <a href="../beacon">
            <img src="../images/beacon-board.jpg" class="image">
            <div class="overlay">
                <div class="text">Beacon board</div>
            </div>
        </a>
    </div>
</div>
<div class="row">
    <div class="large-6 columns container">
        <a href="../adapter">
            <img src="../images/can-adapter.jpg" class="image">
            <div class="overlay">
                <div class="text">CAN adapter</div>
            </div>
        </a>
    </div>
    <div class="large-6 columns container">
        <a href="../bootloader">
            <img src="../images/bootloader.png" class="image">
            <div class="overlay">
                <div class="text">CAN bootloader</div>
            </div>
        </a>
    </div>
</div>
</div>

<style media="screen" type="text/css">
.container {
    position: relative;
    width: 50%;
    white-space: nowrap;
    display: table-cell;
    padding-right: 5px;
}

.image {
    display: inline;
    width: 100%;
}

.overlay {
    position: absolute;
    top: 0;
    bottom: 5px;
    left: 0;
    right: 5px;
    opacity: 0;
    transition: .5s ease;
    background-color: #264d73;
}

.container:hover .overlay {
    opacity: 0.8;
}

.text {
    color: white;
    font-size: 24px;
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
    -ms-transform: translate(-50%, -50%);
    text-align: center;
}
</style>
