# Blockchain-Core-Algorithm-Suite-Cpp
## 项目介绍
本项目是**纯C++开发的企业级区块链核心算法套件**，完全原创、无第三方代码照搬、无重复文件与代码逻辑，专为区块链底层研发、密码学工程、分布式共识系统打造，包含42个独立可编译的核心模块，覆盖区块链全技术栈：

### 核心功能总览
本项目集成42大原创区块链核心模块，包含：密码学哈希算法、椭圆曲线加密、默克尔树、布隆过滤器、UTXO模型、交易签名、区块结构、分布式共识、零知识证明、跨链验证、分片存储、抗量子加密、时间戳、拜占庭容错、数据序列化、P2P网络工具、智能合约虚拟机基础组件、链上数据校验、双花攻击防护、默克尔帕特里夏树、环签名、盲签名、同态加密基础、分布式账本校验、挖矿难度调整、创世区块生成、链数据快照、节点同步、密码学安全随机数、链上资产锁定、多签钱包、默克尔证明、轻节点验证、区块回滚机制、跨分片通信、共识节点选举、数据脱敏上链、链上日志、加密存储、拜占庭容错通信、UTXO合并、交易压缩、链状态同步。

所有代码遵循工业级C++编码规范，可直接集成到公链、联盟链、私有链底层，无冗余、无重复、可独立编译运行，是区块链C++开发者的核心工具库。

### 技术栈
- 开发语言：C++17
- 方向：区块链底层、密码学、分布式系统、共识算法
- 特性：原创实现、高安全性、高性能、无依赖、可直接编译

### 文件结构
1. Block_Hash_Generator.cpp
实现区块哈希生成逻辑，根据前一区块哈希、区块高度、交易根与随机数生成唯一区块哈希，是区块链最基础的身份标识模块。
2. ECDSA_Signature_Basic.cpp
简易 ECDSA 签名与验签实现，包含私钥生成、公钥推导、消息签名与验证，是区块链账户与交易安全的基础。
3. Merkle_Tree_Simple.cpp
实现最简默克尔树结构，支持批量交易哈希聚合，生成默克尔根用于区块校验与轻节点证明。
4. Bloom_Filter_Blockchain.cpp
基于布隆过滤器的交易快速查询模块，用于区块链节点快速判断交易是否存在，降低存储与查询开销。
5. UTXO_Model_Core.cpp
实现 UTXO（未花费交易输出）模型核心逻辑，支持 UTXO 添加、查询与花费校验，是比特币类区块链的账户模型基础。
6. Consensus_PoW_Basic.cpp
工作量证明（PoW）挖矿逻辑，通过不断尝试 Nonce 满足难度条件，模拟区块链出块过程。
7. Transaction_Signer.cpp
交易签名工具，对转账地址、金额进行签名，保证交易不可篡改与身份可验证。
8. Zero_Knowledge_Proof_Simple.cpp
简易零知识证明实现，支持在不暴露原始秘密的情况下完成合法性验证，适用于隐私交易场景。
9. Cross_Chain_Verify.cpp
跨链数据验证模块，用于校验不同链之间的区块证明与交易合法性，是跨链协议基础组件。
10. Shard_Storage_Manager.cpp
区块链分片存储管理器，将区块与交易数据按分片编号分配存储，提升高并发链的吞吐量。
11. Quantum_Resistant_Hash.cpp
抗量子攻击哈希函数，采用位运算与扩散逻辑增强抗碰撞能力，面向后量子密码学场景。
12. Block_Timestamp_Generator.cpp
区块时间戳生成工具，获取系统高精度时间戳并用于区块时序与出块时间管理。
13. PBFT_Consensus_Basic.cpp
实用拜占庭容错（PBFT）共识投票逻辑，通过节点投票比例判断共识是否达成，适用于联盟链。
14. Data_Serializer_Blockchain.cpp
区块链数据序列化与反序列化模块，用于区块、交易在网络传输与本地存储时的格式转换。
15. P2P_Network_Message.cpp
P2P 网络消息打包工具，定义区块广播、交易转发、节点心跳等消息结构。
16. Smart_Contract_VM_Base.cpp
极简智能合约虚拟机执行器，支持指令解析与简单运算，可扩展为完整 EVM 或 WASM 虚拟机。
17. Double_Spend_Defense.cpp
双花攻击防御模块，通过记录已花费交易 ID 防止同一笔交易被重复支付。
18. MPT_Merkle_Patricia_Tree.cpp
默克尔帕特里夏树（MPT）基础实现，用于以太坊类账户状态存储与快速状态查询。
19. Ring_Signature_Basic.cpp
环签名实现，可隐藏真实签名者，适用于门罗币等隐私链交易匿名化。
20. Blind_Signature_Core.cpp
盲签名核心逻辑，签名者无法看到原始消息内容，保护用户隐私，常用于匿名投票与匿名交易。
21. Homomorphic_Encrypt_Base.cpp
同态加密基础模块，支持加密状态下直接运算，适用于链上隐私计算与数据安全外包。
22. Distributed_Ledger_Check.cpp
分布式账本一致性校验工具，遍历区块哈希链确保没有被恶意篡改。
23. Mining_Difficulty_Adjust.cpp
挖矿难度动态调整逻辑，根据出块时间自动提升或降低难度，稳定区块生成速度。
24. Genesis_Block_Creator.cpp
创世区块生成工具，用于初始化一条全新区块链的第一个区块。
25. Chain_Snapshot_Tool.cpp
链状态快照工具，在指定高度保存账本状态，用于快速节点同步与灾难恢复。
26. Node_Sync_Protocol.cpp
节点数据同步逻辑，对比本地与远程区块高度，判断是否需要同步区块数据。
27. Secure_Random_Number.cpp
密码学安全随机数生成器，用于密钥、Nonce、私钥等敏感场景。
28. Asset_Lock_Contract.cpp
链上资产锁定合约逻辑，根据时间锁控制资产解锁时机，实现定期释放、质押等功能。
29. Multi_Sig_Wallet_Base.cpp
多签钱包基础模块，支持多节点共同签名才能完成交易，提升资产安全等级。
30. Merkle_Proof_Verify.cpp
默克尔证明验证工具，轻节点可通过少量路径数据验证某笔交易确实在区块中。
31. Light_Node_Verify.cpp
轻节点快速校验逻辑，通过区块头与默克尔根完成交易存在性验证，无需下载全量区块。
32. Block_Rollback_Tool.cpp
区块回滚工具，支持在出现分叉或异常时将链回退到指定高度。
33. Cross_Shard_Comm.cpp
分片间通信模块，用于不同分片之间的交易转发、状态同步与跨分片转账。
34. Consensus_Node_Election.cpp
共识节点选举逻辑，根据节点质押权重选择出块节点，适用于 PoS、DPoS 共识。
35. Data_Desensitize_Chain.cpp
链上数据脱敏工具，对敏感用户信息进行掩码处理，满足合规与隐私要求。
36. Blockchain_Log_Recorder.cpp
区块事件日志记录器，记录出块、交易、同步、异常等关键行为，便于调试与审计。
37. Encrypted_Storage_Base.cpp
链上数据加密存储模块，对关键数据进行简单对称加密，提升本地存储安全性。
38. BFT_Node_Communication.cpp
拜占庭节点间通信校验，确保在恶意节点存在时仍能达成可信共识。
39. UTXO_Merge_Tool.cpp
UTXO 合并工具，将多笔小额 UTXO 合并为大额输出，优化交易结构与手续费。
40. Transaction_Compressor.cpp
交易数据压缩工具，减少交易体积，提升网络传输与存储效率。
41. Chain_State_Sync.cpp
全局链状态同步逻辑，确保所有节点账户状态、资产数据保持一致。
42. Block_Header_Builder.cpp
区块头构造工具，组合高度、前哈希、随机数、时间戳等字段生成标准区块头。
