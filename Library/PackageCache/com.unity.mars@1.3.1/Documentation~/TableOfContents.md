* [Unity MARS Overview](index.md)
  * [Introduction](index.md#introduction)
  * [Requirements](index.md#requirements)
* [Step by Step guide for building to devices with Unity MARS](BuildingToADeviceWithMARS.md)
    * [Installing MARS on a new project](BuildingToADeviceWithMARS.md)
    * [Preparing Unity for making builds for Android or iOS](BuildingToADeviceWithMARS.md#preparing-unity-for-making-builds-for-android---ios)
        * [iOS-specific project setup for building with Unity MARS](BuildingToADeviceWithMARS.md#ios-specific-project-setup-for-building-with-unity-mars)
        * [Android-specific project setup for building with Unity MARS](BuildingToADeviceWithMARS.md#android-specific-project-setup-for-building-with-unity-mars)
    * [Creating a scene for testing on a build](BuildingToADeviceWithMARS.md#creating-a-scene-for-testing-on-a-device-build)
    * [Building your project to your selected platform](BuildingToADeviceWithMARS.md#building-your-project-to-your-selected-platform)
* [Getting started](GettingStarted.md)
  * [Quick installation overview](GettingStarted.md#quick-unity-mars-installation-overview)
  * [Creating your app](GettingStarted.md#creating-your-app)
    * [Overview of the Unity MARS UI](GettingStarted.md#overview-of-the-unity-mars-ui)
    * [Setting up the MARS Device and Simulation views](GettingStarted.md#setting-up-the-unity-mars-device-and-simulation-views)
    * [Setting up your first Proxy](GettingStarted.md#setting-up-your-first-proxy)
    * [Adding content to your rule](GettingStarted.md#adding-content-to-your-rule)
    * [Adding a plane size condition](GettingStarted.md#adding-a-plane-size-condition)
    * [Testing your app in a simulated environment](GettingStarted.md#testing-your-app-in-a-simulated-environment)
    * [Building your app](GettingStarted.md#building-your-app)
    * [Additional features](GettingStarted.md#additional-features)
* [Unity Mars UI overview](UIOverview.md)
  * [Overview of the Unity MARS UI](UIOverview.md#overview-of-the-unity-mars-ui)
  * [MARS panel](UIOverview.md#mars-panel)
    * [Create](UIOverview.md#create)
    * [Simulation Controls](UIOverview.md#simulation-controls)
    * [Content Hierarchy](UIOverview.md#content-hierarchy)
    * [Environment Hierarchy](UIOverview.md#environment-hierarchy)
  * [Simulation view](UIOverview.md#simulation-view)
  * [Device view](UIOverview.md#device-view)
    * [Recording from the Device View](UIOverview.md#recording-from-the-device-view)
  * [Simulation Test Runner](UIOverview.md#simulation-test-runner)
  * [Simulation settings](UIOverview.md#simulation-settings)
  * [MARS Templates](UIOverview.md#mars-templates)
  * [MARS GameObject menu](UIOverview.md#mars-gameobject-menu)
* [Unity MARS concepts](MARSConcepts.md)
  * [Proxy](MARSConcepts.md#proxy)
  * [Proxy Groups](MARSConcepts.md#proxy-groups)
  * [Replicators](MARSConcepts.md#replicators)
  * [Proxy Forces](MARSConcepts.md#proxy-forces)
  * [Synthetic Objects and Simulation View](MARSConcepts.md#synthetic-objects-and-simulation-view)
  * [The Mars Database](MARSConcepts.md#the-mars-database)
  * [The MARS Session and the Camera](MARSConcepts.md#the-mars-session-and-the-camera)
* [Working with Unity MARS](WorkingWithMARS.md)
  * [Placing digital content on a table](WorkingWithMARS.md#placing-digital-content-on-a-table)
    * [Creating a Proxy from Scratch](WorkingWithMARS.md#creating-a-proxy-from-scratch)
    * [Attaching content to the Proxy](WorkingWithMARS.md#attaching-content-to-the-proxy)
  * [Creating a Proxy automatically from simulated data - Create Tool](WorkingWithMARS.md#creating-a-proxy-automatically-from-simulated-data-create-tool)
  * [Debugging a Proxy against simulation data - Compare Tool](WorkingWithMARS.md#debugging-a-proxy-against-simulation-data-compare-tool)
  * [Aligning a Proxy with the world's Y axis](WorkingWithMARS.md#aligning-a-proxy-with-the-worlds-y-up-axis)
  * [Using a Replicator to place content on multiple surfaces](WorkingWithMARS.md#using-a-replicator-to-place-content-on-multiple-surfaces)
  * [Creating Proxy Groups](WorkingWithMARS.md#creating-proxy-groups)
  * [Scaling AR content with World Scale](WorkingWithMARS.md#scaling-ar-content-with-world-scale)
  * [Scene Evaluation](WorkingWithMARS.md#scene-evaluation)
  * [Placing content based on synthetic data](WorkingWithMARS.md#placing-content-based-on-synthetic-data)
  * [Tips for authoring AR content with MARS](WorkingWithMARS.md#tips-for-authoring-ar-content-with-unity-mars)
* [Rules](Rules.md)
  * [Getting started with Rules](Rules.md#getting-started-with-rules)
    * [Changing match count](Rules.md#changing-match-count)
    * [Changing Proxy type](Rules.md#changing-proxy-type)
    * [Adding actions](Rules.md#adding-actions)
  * [Proxy Groups](Rules.md#proxy-groups)
    * [Converting a Proxy to a Group](Rules.md#converting-a-proxy-to-a-group)
  * [Landmarks](Rules.md#landmarks)
  * [Working with the backing objects](Rules.md#working-with-the-backing-objects)
* [Face Tracking](FaceTracking.md)
  * [Using a facemask template](FaceTracking.md#using-a-facemask-template)
    * [Loading custom recorded videos](FaceTracking.md#loading-custom-recorded-videos)
  * [Placing digital content on a face](FaceTracking.md#placing-digital-content-on-a-face)
  * [Testing face tracking on Unity MARS](FaceTracking.md#testing-face-tracking-on-unity-mars)
  * [Face tracking considerations](FaceTracking.md#face-tracking-considerations)
* [Body Tracking](BodyTracking.md)
    * [Body Tracking in Unity MARS](BodyTracking.md#body-tracking-in-unity-mars)
        * [Creating a Body Proxy](BodyTracking.md#creating-a-body-proxy)
        * [Preparing the Body Proxy](BodyTracking.md#preparing-the-body-proxy)
    * [Body landmarks](BodyTracking.md#body-landmarks)
    * [Matching body poses](BodyTracking.md#matching-body-poses)
       * [The Body Pose tool](BodyTracking.md#the-body-pose-tool)
           * [Creating poses](BodyTracking.md#creating-poses)
           * [Loading poses](BodyTracking.md#loading-poses)
           * [Body pose data](BodyTracking.md#body-pose-data)
                * [Modifying poses](BodyTracking.md#modifying-poses)
       * [Final thoughts](BodyTracking.md#final-thoughts)
    * [Synthetic bodies](BodyTracking.md#synthetic-bodies)
    * [Body tracking example](BodyTracking.md#body-tracking-example)
        * [Extracting a pose from an animation](BodyTracking.md#extracting-a-pose-from-an-animation)
        * [Testing the extracted pose in the Simulation view](BodyTracking.md#testing-the-extracted-pose-in-the-simulation-view)
        * [Building and testing tracked poses](BodyTracking.md#building-and-testing-tracked-poses)
* [Image Marker Tracking](Markers.md)
  * [Marker tracking](Markers.md#marker-tracking)
  * [Creating a marker library](Markers.md#creating-a-marker-library)
  * [Using marker libraries](Markers.md#using-marker-libraries)
  * [Marker conditions](Markers.md#marker-conditions)
  * [Visualizing image markers](Markers.md#visualizing-image-markers)
  * [Simulating image markers](Markers.md#simulating-image-markers)
    * [Adding synthetic markers to environments](Markers.md#adding-synthetic-markers-to-environments)
    * [Manipulating synthetic image markers](Markers.md#manipulating-synthetic-image-markers)
  * [Putting it together](Markers.md#putting-it-together)
* [Simulation environments](SimulationEnvironments.md)
  * [Creating a simulated environment](SimulationEnvironments.md#creating-a-simulated-environment)
  * [Animated Environment Elements](SimulationEnvironments.md#animated-environment-elements)
  * [Session Recordings](SimulationEnvironments.md#session-recordings)
  * [Environment settings](SimulationEnvironments.md#environment-settings)
    * [Environment info](SimulationEnvironments.md#environment-info)
    * [Render settings](SimulationEnvironments.md#render-settings)
  * [Generating synthetic planes](SimulationEnvironments.md#generating-synthetic-planes)
    * [Saving planes from simulation](SimulationEnvironments.md#save-planes-from-simulation)
  * [Plane Extraction Settings](SimulationEnvironments.md#plane-extraction-settings)
    * [Voxel generation parameters](SimulationEnvironments.md#voxel-generation-parameters)
    * [Plane finding parameters](SimulationEnvironments.md#plane-finding-parameters)
  * [XRay region component](SimulationEnvironments.md#xray-region-component)
  * [XRay collider component](SimulationEnvironments.md#xray-collider-component)
* [Landmarks](Landmarks.md)
  * [Adding landmars to MARS objects](Landmarks.md#adding-landmarks-to-unity-mars-objects)
    * [Landmarks on planes](Landmarks.md#landmarks-on-planes)
    * [Landmarks on faces](Landmarks.md#landmarks-on-faces)
    * [Other types of landmarks](Landmarks.md#other-types-of-landmarks)
  * [Landmark scripts](Landmarks.md#landmark-scripts)
    * [LandmarkController](Landmarks.md#landmarkcontroller)
    * [LandmarkOutput](Landmarks.md#landmarkoutput)
    * [LandmarkSettings](Landmarks.md#landmarksettings)
    * [LandmarkSource](Landmarks.md#landmarksource)
  * [Defining custom landmarks](Landmarks.md#defining-custom-landmarks)
    * [Create a landmark source](Landmarks.md#create-a-landmark-source)
    * [Creating a landmark output](Landmarks.md#creating-a-landmark-output)
    * [Creating landmark settings](Landmarks.md#creating-landmark-settings)
* [Traits](Traits.md)
  * [Semantic tags](Traits.md#semantic-tags)
  * [Standard traits](Traits.md#standard-traits)
  * [Adding trait requirements to Proxies](Traits.md#adding-trait-requirements-to-proxies)
  * [Adding trait requirements via scripts](Traits.md#adding-trait-requirements-via-scripts)
  * [Providing traits via scripts](Traits.md#providing-traits-via-scripts)
  * [Custom trait types](Traits.md#custom-trait-types)
    * [Example](Traits.md#example)
    * [Adding your type](Traits.md#adding-your-type)
* [Proxy forces](Forces.md)
  * [Force components](Forces.md#force-components)
  * [Examples](Forces.md#examples)
    * [Getting started: Making an avatar look towards you from a surface](Forces.md#getting-started-making-an-avatar-look-towards-you-from-a-surface)
      * [Setting up a proxy (before adding forces)](Forces.md#setting-up-a-proxy-before-adding-forces)
      * [Adding forces to the proxy](Forces.md#adding-forces-to-the-proxy)
      * [Testing created forces](Forces.md#testing-created-forces)
      * [Conclusions](Forces.md#conclusions)
    * [Example: Dinner for two using forces](Forces.md#example-dinner-for-two-using-forces)
      * [Set up the basic scene environment](Forces.md#set-up-the-basic-scene-environment)
      * [Organize the dishes](Forces.md#organize-the-dishes)
      * [Configure settings for all the cutlery](Forces.md#configure-settings-for-all-the-cutlery)
      * [Conclusions](Forces.md#conclusions-1)
      * [Troubleshooting this example](Forces.md#troubleshooting-this-example)
    * [Using forces without Proxies](Forces.md#using-forces-without-proxies)
    * [Important considerations regarding Proxy forces](Forces.md#important-considerations-regarding-proxy-forces)
    * [Troubleshooting / FAQ](Forces.md#troubleshooting--faq)
* [Software development guide](SoftwareDevelopmentGuide.md)
  * [Package contents](SoftwareDevelopmentGuide.md#package-contents)
  * [Software developer topics](SoftwareDevelopmentGuide.md#software-developer-topics)
    * [Generate all .csproj files](SoftwareDevelopmentGuide.md#generate-all-csproj-files)
    * [MARS Session](SoftwareDevelopmentGuide.md#mars-session)
    * [Functionality Injection](SoftwareDevelopmentGuide.md#functionality-injection)
    * [Functionality islands](SoftwareDevelopmentGuide.md#functionality-islands)
    * [Module Loader](SoftwareDevelopmentGuide.md#module-loader)
      * [Reload Modules](SoftwareDevelopmentGuide.md#reload-modules)
    * [MARS Database](SoftwareDevelopmentGuide.md#mars-database)
      * [MARSBackend - read](SoftwareDevelopmentGuide.md#marsbackend-read)
      * [Synthetic Objects - write](SoftwareDevelopmentGuide.md#synthetic-objects-write)
      * [Reasoning APIs - read and write](SoftwareDevelopmentGuide.md#reasoning-apis-read-and-write)
    * [Queries](SoftwareDevelopmentGuide.md#queries)
      * [Common query data](SoftwareDevelopmentGuide.md#common-query-data)
      * [Exclusivity ](SoftwareDevelopmentGuide.md#exclusivity)
    * [Proxy Group queries](SoftwareDevelopmentGuide.md#proxy-group-queries)
      * [Required child Proxies](SoftwareDevelopmentGuide.md#required-child-proxies)
    * [Writing Conditions](SoftwareDevelopmentGuide.md#writing-conditions)
    * [Writing MultiConditions](SoftwareDevelopmentGuide.md#writing-multiconditions)
    * [Writing Relations](SoftwareDevelopmentGuide.md#writing-relations)
    * [Writing MultiRelations](SoftwareDevelopmentGuide.md#writing-multirelations)
    * [Writing Actions](SoftwareDevelopmentGuide.md#writing-actions)
    * [Populating the MARSEntity inspector with your classes](SoftwareDevelopmentGuide.md#populating-the-marsentity-inspector-with-your-classes)
    * [Synthetic Data](SoftwareDevelopmentGuide.md#synthetic-data)
      * [Writing a SynthesizedTrait](SoftwareDevelopmentGuide.md#writing-a-synthesizedtrait)
    * [Reasoning APIs](SoftwareDevelopmentGuide.md#reasoning-apis)
      * [Selection criteria for Reasoning APIs](SoftwareDevelopmentGuide.md#selection-criteria-for-reasoning-apis)
      * [Writing Reasoning APIs](SoftwareDevelopmentGuide.md#writing-reasoning-apis)
    * [Providers](SoftwareDevelopmentGuide.md#providers)
      * [How a provider is selected](SoftwareDevelopmentGuide.md#how-a-provider-is-selected)
      * [Elective Extensions](SoftwareDevelopmentGuide.md#elective-extensions)
    * [Writing behaviors compatible with Simulation](SoftwareDevelopmentGuide.md#writing-behaviors-compatible-with-simulation)
      * [MARS Time](SoftwareDevelopmentGuide.md#mars-time)
      * [Finding the Camera](SoftwareDevelopmentGuide.md#finding-the-camera)
    * [MARS Editor Systems](SoftwareDevelopmentGuide.md#mars-editor-systems)
      * [Data Visuals](SoftwareDevelopmentGuide.md#data-visuals)
* [Graphics](Graphics.md)
  * [Composite Render](Graphics.md#composite-render)
    * [Composite Render Options](Graphics.md#composite-render-options)
  * [Supported Rendering Modes](Graphics.md#supported-rendering-modes)
  * [Post Processing](Graphics.md#post-processing)
  * [AR Background Setup in Unity MARS](Graphics.md#ar-background-setup-in-unity-mars)
    * [Configuring ARCameraBackground with the Universal Render Pipeline](Graphics.md#configuring-arcamerabackground-with-the-universal-render-pipeline)
  * [Universal Render Pipeline](Graphics.md#universal-render-pipeline)
* [MARS Components Reference Guide](index.md#mars-components-reference-guide)
  * [Conditions](ReferenceGuideConditions.md)
  * [Traits](ReferenceGuideTraits.md)
  * [Actions](ReferenceGuideActions.md)
  * [Forces](ReferenceGuideForces.md)
  * [Visualizers](ReferenceGuideVisualizers.md)
  * [Synthetic Data](ReferenceGuideSyntheticData.md)
  * [Simulation Environment](ReferenceGuideSimulationEnvironmentComponents.md)
* [FAQ](FAQ.md)
* [Glossary](Glossary.md)
* [Privacy & Legal Info](PrivacyLegalInfo.md)