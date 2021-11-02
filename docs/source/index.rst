.. PyTorch documentation master file, created by
   sphinx-quickstart on Fri Dec 23 13:31:47 2016.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

:github_url: https://github.com/pytorch/pytorch

.. container:: docs-overview

Docs Overview
===================================

PyTorch is an optimized tensor library for deep learning using GPUs and CPUs.

Features described in this documentation are classified by release status:

**Stable:**  These features will be maintained long-term and there should generally
be no major performance limitations or gaps in documentation.
We also expect to maintain s compatibility (although
breaking changes can happen and notice will be given one release ahead
of time). `View All Stable </versions.html>`_

**Beta:**  These features are tagged as Beta because the API may change based on
user feedback, because the performance needs to improve, or because
coverage across operators is not yet complete. For Beta features, we are
committing to seeing the feature through to the Stable classification.
We are not, however, committing to backwards compatibility. `View All Beta </versions.html>`_

**Prototype:**  These features are typically not available as part of
binary distributions like PyPI or Conda, except sometimes behind run-time
flags, and are at an early stage for feedback and testing. `View All Prototype </versions.html>`_


.. tabs::

   .. tab:: Python API
      
      Python API
      
      PyTorch provides ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna.

      .. toctree::
         :maxdepth: 1
         :caption: Python API
         
         torch
         nn
         nn.functional
         tensors
         tensor_attributes
         tensor_view
         torch.autograd <autograd>
         cuda
         torch.cuda.amp <amp>
         torch.backends <backends>
         torch.distributed <distributed>
         torch.distributed.algorithms.join <distributed.algorithms.join>
         torch.distributed.elastic <distributed.elastic>
         torch.distributed.optim <distributed.optim>
         torch.distributions <distributions>
         torch.fft <fft>
         futures
         fx
         torch.hub <hub>
         torch.jit <jit>
         torch.linalg <linalg>
         torch.special <special>
         torch.overrides
         torch.package <package>
         profiler
         nn.init
         onnx
         optim
         complex_numbers
         ddp_comm_hooks
         pipeline
         quantization
         rpc
         torch.random <random>
         sparse
         storage
         torch.testing <testing>
         torch.utils.benchmark <benchmark_utils>
         torch.utils.bottleneck <bottleneck>
         torch.utils.checkpoint <checkpoint>
         torch.utils.cpp_extension <cpp_extension>
         torch.utils.data <data>
         torch.utils.dlpack <dlpack>
         torch.utils.mobile_optimizer <mobile_optimizer>
         torch.utils.model_zoo <model_zoo>
         torch.utils.tensorboard <tensorboard>
         type_info
         named_tensor
         name_inference
         torch.__config__ <__config__>

   .. tab:: Domain Libraries
      
      PyTorch Domain Library
      
      PyTorch provides ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna 

      .. toctree::
         :maxdepth: 1
         :hidden:
         :caption: Domain Libraries

         torchaudio <https://pytorch.org/audio/stable>
         torchtext <https://pytorch.org/text/stable>
         torchvision <https://pytorch.org/vision/stable>
         TorchServe <https://pytorch.org/serve>
         PyTorch on XLA Devices <http://pytorch.org/xla/>
      
      +----------------------------------------+---------------------------------------+
      |.. image:: _static/img/torchaudio.svg   | **TorchAudio**                        |
      |                                        |                                       |
      |                                        | Sed do eiusmod tempor incididunt ut   |
      |                                        | labore et dolore magna et dolort      |
      |                                        | labore et dolore magna                |
      |                                        |                                       |
      |                                        | `View Details <https://pytorch.org>`_ |
      +----------------------------------------+---------------------------------------+
      |.. image:: _static/img/torchtext.svg    | **TorchText**                         |
      |                                        |                                       |
      |                                        | Sed do eiusmod tempor incididunt ut   |
      |                                        | labore et dolore magna et dolort      |
      |                                        | labore et dolore magna                |
      |                                        |                                       |
      |                                        | `View Details <https://pytorch.org>`_ |
      +----------------------------------------+---------------------------------------+
      |.. image:: _static/img/torchvision.svg  | **TorchVision**                       |
      |                                        |                                       |
      |                                        | Sed do eiusmod tempor incididunt ut   |
      |                                        | labore et dolore magna et dolort      |
      |                                        | labore et dolore magna                |
      |                                        |                                       |
      |                                        | `View Details <https://pytorch.org>`_ |
      +----------------------------------------+---------------------------------------+
      |.. image:: _static/img/torchelastic.svg | **TorchElastic**                      |
      |                                        |                                       |
      |                                        | Sed do eiusmod tempor incididunt ut   |
      |                                        | labore et dolore magna et dolort      |
      |                                        | labore et dolore magna                |
      |                                        |                                       |
      |                                        | `View Details <https://pytorch.org>`_ |
      +----------------------------------------+---------------------------------------+
      |.. image:: _static/img/torchserve.svg   | **TorchServe**                        |
      |                                        |                                       |
      |                                        | Sed do eiusmod tempor incididunt ut   |
      |                                        | labore et dolore magna et dolort      |
      |                                        | labore et dolore magna                |
      |                                        |                                       | 
      |                                        | `View Details <https://pytorch.org>`_ |
      +----------------------------------------+---------------------------------------+
      |.. image:: _static/img/xladevices.svg   | **PyTorch on XLA devices**            |
      |                                        |                                       |
      |                                        | Sed do eiusmod tempor incididunt ut   |
      |                                        | labore et dolore magna et dolort      |
      |                                        | labore et dolore magna                |
      |                                        |                                       |
      |                                        | `View Details <https://pytorch.org>`_ |
      +----------------------------------------+---------------------------------------+

   .. tab:: Language Bindings
      
      Language Bindings
      
      Bindings ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna 

      .. toctree::
         :maxdepth: 1
         :hidden:
         :caption: Language Bindings

         cpp_index
         Javadoc <https://pytorch.org/javadoc/>

      
      +--+------------------------------------------+
      |  | **C++**                                  |
      |  |                                          |
      |  | Sed do eiusmod tempor incididunt ut      |
      |  | labore et dolore magna unt ut            |
      |  | labore magna unt ut labore et incididunt |
      |  | ut labore et dolore magna unt            |
      |  |                                          |
      |  | `View Details <https://pytorch.org>`_    |
      +--+------------------------------------------+
      |  | **TorchText**                            |
      |  |                                          |
      |  | Sed do eiusmod tempor incididunt ut      |
      |  | labore et dolore magna unt ut            |
      |  | labore magna unt ut labore et incididunt |
      |  | ut labore et dolore magna unt            |
      |  |                                          |
      |  | `View Details <https://pytorch.org>`_    |
      +--+------------------------------------------+

   .. tab:: Community
      
      Community
      
      Community ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna 

      .. toctree::
         :glob:
         :hidden:
         :maxdepth: 1
         :caption: Community

         community/*
      
      +--+---------------------------------------------+
      |  | **PyTorch Contribution Guide**              |
      |  |                                             |
      |  | Sed do eiusmod tempor incididunt ut         |
      |  | labore et dolore magna unt ut               |
      |  | labore magna unt ut labore et incididunt    |
      |  | ut labore et dolore magna unt               |
      |  |                                             |
      |  | `View Details <https://pytorch.org>`_       |
      +--+---------------------------------------------+
      |  | **PyTorch Governance**                      |
      |  |                                             |
      |  | Sed do eiusmod tempor incididunt ut         |
      |  | labore et dolore magna unt ut               |
      |  | labore magna unt ut labore et incididunt    |
      |  | ut labore et dolore magna unt               |
      |  |                                             |
      |  | `View Details <https://pytorch.org>`_       |
      +--+---------------------------------------------+
      |  | **PyTorch Governance | Person of Interest** |
      |  |                                             |
      |  | Sed do eiusmod tempor incididunt ut         |
      |  | labore et dolore magna unt ut               |
      |  | labore magna unt ut labore et incididunt    |
      |  | ut labore et dolore magna unt               |
      |  |                                             |
      |  | `View Details <https://pytorch.org>`_       |
      +--+---------------------------------------------+
      
   .. tab:: Notes
      
      Notes
      
      Notes ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna 

      .. toctree::
         :glob:
         :maxdepth: 1
         :caption: Notes

         notes/*

.. toctree::
   :glob:
   :maxdepth: 1
   :hidden:
   :caption: Indices and tables
   
   Index <https://pytorch.org/genindex.html>
   Module Index <https://pytorch.org/py-modindex.html>  
