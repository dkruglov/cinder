.. _cinder-nexenta:

.. list-table:: Description of Nexenta driver configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``nexenta_blocksize`` = ``4096``
     - (Integer) Block size for datasets
   * - ``nexenta_chunksize`` = ``32768``
     - (Integer) NexentaEdge iSCSI LUN object chunk size
   * - ``nexenta_client_address`` =
     - (String) NexentaEdge iSCSI Gateway client address for non-VIP service
   * - ``nexenta_dataset_compression`` = ``on``
     - (String) Compression value for new ZFS folders.
   * - ``nexenta_dataset_dedup`` = ``off``
     - (String) Deduplication value for new ZFS folders.
   * - ``nexenta_dataset_description`` =
     - (String) Human-readable description for the folder.
   * - ``nexenta_host`` =
     - (String) IP address of Nexenta SA
   * - ``nexenta_iscsi_target_portal_port`` = ``3260``
     - (Integer) Nexenta target portal port
   * - ``nexenta_mount_point_base`` = ``$state_path/mnt``
     - (String) Base directory that contains NFS share mount points
   * - ``nexenta_nbd_symlinks_dir`` = ``/dev/disk/by-path``
     - (String) NexentaEdge logical path of directory to store symbolic links to NBDs
   * - ``nexenta_nms_cache_volroot`` = ``True``
     - (Boolean) If set True cache NexentaStor appliance volroot option value.
   * - ``nexenta_password`` = ``nexenta``
     - (String) Password to connect to Nexenta SA
   * - ``nexenta_rest_port`` = ``0``
     - (Integer) HTTP(S) port to connect to Nexenta REST API server. If it is equal zero, 8443 for HTTPS and 8080 for HTTP is used
   * - ``nexenta_rest_protocol`` = ``auto``
     - (String) Use http or https for REST connection (default auto)
   * - ``nexenta_rrmgr_compression`` = ``0``
     - (Integer) Enable stream compression, level 1..9. 1 - gives best speed; 9 - gives best compression.
   * - ``nexenta_rrmgr_connections`` = ``2``
     - (Integer) Number of TCP connections.
   * - ``nexenta_rrmgr_tcp_buf_size`` = ``4096``
     - (Integer) TCP Buffer size in KiloBytes.
   * - ``nexenta_shares_config`` = ``/etc/cinder/nfs_shares``
     - (String) File with the list of available nfs shares
   * - ``nexenta_sparse`` = ``False``
     - (Boolean) Enables or disables the creation of sparse datasets
   * - ``nexenta_sparsed_volumes`` = ``True``
     - (Boolean) Enables or disables the creation of volumes as sparsed files that take no space. If disabled (False), volume is created as a regular file, which takes a long time.
   * - ``nexenta_target_group_prefix`` = ``cinder/``
     - (String) Prefix for iSCSI target groups on SA
   * - ``nexenta_target_prefix`` = ``iqn.1986-03.com.sun:02:cinder-``
     - (String) IQN prefix for iSCSI targets
   * - ``nexenta_use_https`` = ``True``
     - (Boolean) Use secure HTTP for REST connection (default True)
   * - ``nexenta_user`` = ``admin``
     - (String) User name to connect to Nexenta SA
   * - ``nexenta_volume`` = ``cinder``
     - (String) SA Pool that holds all volumes
