/*
 * main.h
 *
 *  Created on: Feb 5, 2022
 *      Author: David Grant
 */

#define SPI_BAUDRATEPRESCALER_BYPASS                  (0x80000000UL)
#define SPI_BAUDRATEPRESCALER_2                       (0x00000000UL)
#define SPI_BAUDRATEPRESCALER_4                       (0x10000000UL)
#define SPI_BAUDRATEPRESCALER_8                       (0x20000000UL)
#define SPI_BAUDRATEPRESCALER_16                      (0x30000000UL)
#define SPI_BAUDRATEPRESCALER_32                      (0x40000000UL)
#define SPI_BAUDRATEPRESCALER_64                      (0x50000000UL)
#define SPI_BAUDRATEPRESCALER_128                     (0x60000000UL)
#define SPI_BAUDRATEPRESCALER_256                     (0x70000000UL)

#define SPI_FIFO_THRESHOLD_01DATA                     (0x00000000UL)
#define SPI_FIFO_THRESHOLD_02DATA                     (0x00000020UL)
#define SPI_FIFO_THRESHOLD_03DATA                     (0x00000040UL)
#define SPI_FIFO_THRESHOLD_04DATA                     (0x00000060UL)
#define SPI_FIFO_THRESHOLD_05DATA                     (0x00000080UL)
#define SPI_FIFO_THRESHOLD_06DATA                     (0x000000A0UL)
#define SPI_FIFO_THRESHOLD_07DATA                     (0x000000C0UL)
#define SPI_FIFO_THRESHOLD_08DATA                     (0x000000E0UL)
#define SPI_FIFO_THRESHOLD_09DATA                     (0x00000100UL)
#define SPI_FIFO_THRESHOLD_10DATA                     (0x00000120UL)
#define SPI_FIFO_THRESHOLD_11DATA                     (0x00000140UL)
#define SPI_FIFO_THRESHOLD_12DATA                     (0x00000160UL)
#define SPI_FIFO_THRESHOLD_13DATA                     (0x00000180UL)
#define SPI_FIFO_THRESHOLD_14DATA                     (0x000001A0UL)
#define SPI_FIFO_THRESHOLD_15DATA                     (0x000001C0UL)
#define SPI_FIFO_THRESHOLD_16DATA                     (0x000001E0UL)

#define SPI_DATASIZE_4BIT                             (0x00000003UL)
#define SPI_DATASIZE_5BIT                             (0x00000004UL)
#define SPI_DATASIZE_6BIT                             (0x00000005UL)
#define SPI_DATASIZE_7BIT                             (0x00000006UL)
#define SPI_DATASIZE_8BIT                             (0x00000007UL)
#define SPI_DATASIZE_9BIT                             (0x00000008UL)
#define SPI_DATASIZE_10BIT                            (0x00000009UL)
#define SPI_DATASIZE_11BIT                            (0x0000000AUL)
#define SPI_DATASIZE_12BIT                            (0x0000000BUL)
#define SPI_DATASIZE_13BIT                            (0x0000000CUL)
#define SPI_DATASIZE_14BIT                            (0x0000000DUL)
#define SPI_DATASIZE_15BIT                            (0x0000000EUL)
#define SPI_DATASIZE_16BIT                            (0x0000000FUL)
#define SPI_DATASIZE_17BIT                            (0x00000010UL)
#define SPI_DATASIZE_18BIT                            (0x00000011UL)
#define SPI_DATASIZE_19BIT                            (0x00000012UL)
#define SPI_DATASIZE_20BIT                            (0x00000013UL)
#define SPI_DATASIZE_21BIT                            (0x00000014UL)
#define SPI_DATASIZE_22BIT                            (0x00000015UL)
#define SPI_DATASIZE_23BIT                            (0x00000016UL)
#define SPI_DATASIZE_24BIT                            (0x00000017UL)
#define SPI_DATASIZE_25BIT                            (0x00000018UL)
#define SPI_DATASIZE_26BIT                            (0x00000019UL)
#define SPI_DATASIZE_27BIT                            (0x0000001AUL)
#define SPI_DATASIZE_28BIT                            (0x0000001BUL)
#define SPI_DATASIZE_29BIT                            (0x0000001CUL)
#define SPI_DATASIZE_30BIT                            (0x0000001DUL)
#define SPI_DATASIZE_31BIT                            (0x0000001EUL)
#define SPI_DATASIZE_32BIT                            (0x0000001FUL)

#define SPI_POLARITY_LOW                              (0x00000000UL)
#define SPI_POLARITY_HIGH                             SPI_CFG2_CPOL

#define SPI_PHASE_1EDGE                               (0x00000000UL)
#define SPI_PHASE_2EDGE                               SPI_CFG2_CPHA

#define SPI_MASTER_KEEP_IO_STATE_DISABLE              (0x00000000UL)
#define SPI_MASTER_KEEP_IO_STATE_ENABLE               SPI_CFG2_AFCNTR

#define DMA_LSM_FULL_EXECUTION  0x00000000U /*!< Channel is executed for the full linked-list */
#define DMA_LSM_1LINK_EXECUTION DMA_CCR_LSM /*!< Channel is executed once for the current LLI */

#define NODE_CTR1_DEFAULT_OFFSET        (0x0000U) /* CTR1 default offset                   */
#define NODE_CTR2_DEFAULT_OFFSET        (0x0001U) /* CTR2 default offset                   */
#define NODE_CBR1_DEFAULT_OFFSET        (0x0002U) /* CBR1 default offset                   */
#define NODE_CSAR_DEFAULT_OFFSET        (0x0003U) /* CSAR default offset                   */
#define NODE_CDAR_DEFAULT_OFFSET        (0x0004U) /* CDAR default offset                   */
#define NODE_CTR3_DEFAULT_OFFSET        (0x0005U) /* CTR3 2D addressing default offset     */
#define NODE_CBR2_DEFAULT_OFFSET        (0x0006U) /* CBR2 2D addressing default offset     */
#define NODE_CLLR_2D_DEFAULT_OFFSET     (0x0007U) /* CLLR 2D addressing default offset     */
#define NODE_CLLR_LINEAR_DEFAULT_OFFSET (0x0005U) /* CLLR linear addressing default offset */

#define DMA_DEST_DATAWIDTH_BYTE     0x00000000U         /*!< Destination data width : Byte     */
#define DMA_DEST_DATAWIDTH_HALFWORD DMA_CTR1_DDW_LOG2_0 /*!< Destination data width : HalfWord */
#define DMA_DEST_DATAWIDTH_WORD     DMA_CTR1_DDW_LOG2_1 /*!< Destination data width : Word     */

#define DMA_SRC_DATAWIDTH_BYTE     0x00000000U         /*!< Source data width : Byte     */
#define DMA_SRC_DATAWIDTH_HALFWORD DMA_CTR1_SDW_LOG2_0 /*!< Source data width : HalfWord */
#define DMA_SRC_DATAWIDTH_WORD     DMA_CTR1_SDW_LOG2_1 /*!< Source data width : Word     */

#define DMA_DATA_RIGHTALIGN_ZEROPADDED 0x00000000U    /*!< If source data width < destination data width
                                                           => Right aligned padded with 0 up to destination data
                                                              width                                              */
#define DMA_DATA_RIGHTALIGN_LEFTTRUNC  0x00000000U    /*!< If source data width > destination data width
                                                           => Right aligned left Truncated down to destination
                                                              data width                                         */
#define DMA_DATA_RIGHTALIGN_SIGNEXT    DMA_CTR1_PAM_0 /*!< If source data width < destination data width
                                                           => Right Aligned padded with sign extended up to
                                                              destination data width                             */
#define DMA_DATA_LEFTALIGN_RIGHTTRUNC  DMA_CTR1_PAM_0 /*!< If source data width > destination data width
                                                           => Left Aligned Right Truncated down to the
                                                              destination data width                             */
#define DMA_DATA_PACK                  DMA_CTR1_PAM_1 /*!< If source data width < destination data width
                                                           => Packed at the destination data width
                                                              (Available only for GPDMA)                         */
#define DMA_DATA_UNPACK                DMA_CTR1_PAM_1 /*!< If source data width > destination data width
                                                           => Unpacked at the destination data width
                                                              (Available only for GPDMA)                         */

#define DMA_SINC_FIXED       0x00000000U   /*!< Source fixed       single / burst */
#define DMA_SINC_INCREMENTED DMA_CTR1_SINC /*!< Source incremented single / burst */

#define DMA_SRC_ALLOCATED_PORT0  0x00000000U  /*!< Source allocated Port 0      */
#define DMA_SRC_ALLOCATED_PORT1  DMA_CTR1_SAP /*!< Source allocated Port 1      */
#define DMA_DEST_ALLOCATED_PORT0 0x00000000U  /*!< Destination allocated Port 0 */
#define DMA_DEST_ALLOCATED_PORT1 DMA_CTR1_DAP /*!< Destination allocated Port 1 */

#define DMA_EXCHANGE_NONE          0x00000000U  /*!< No data exchange                                                          */
#define DMA_EXCHANGE_DEST_BYTE     DMA_CTR1_DBX /*!< Destination Byte exchange when destination data width is > Byte           */
#define DMA_EXCHANGE_DEST_HALFWORD DMA_CTR1_DHX /*!< Destination Half-Word exchange when destination data width is > Half-Word */
#define DMA_EXCHANGE_SRC_BYTE      DMA_CTR1_SBX /*!< Source Byte endianness exchange when source data width is word            */

#define DMA_TCEM_BLOCK_TRANSFER          0x00000000U     /*!< The TC event is generated at the end of each block and the
                                                              HT event is generated at the half of each block         */
#define DMA_TCEM_REPEATED_BLOCK_TRANSFER DMA_CTR2_TCEM_0 /*!< The TC event is generated at the end of the repeated block
                                                              and the HT event is generated at the half of the repeated
                                                              block                                                   */
#define DMA_TCEM_EACH_LL_ITEM_TRANSFER   DMA_CTR2_TCEM_1 /*!< The TC event is generated at the end of each linked-list
                                                              item and the HT event is generated at the half of each
                                                              linked-list item                                        */
#define DMA_TCEM_LAST_LL_ITEM_TRANSFER   DMA_CTR2_TCEM   /*!< The TC event is generated at the end of the last
                                                              linked-list item and the HT event is generated at the half
                                                              of the last linked-list item                            */

#define GPDMA1_REQUEST_SPI1_RX (6U)


#define DMA_LINK_ALLOCATED_PORT0 0x00000000U /*!< Link allocated port 0 */
#define DMA_LINK_ALLOCATED_PORT1 DMA_CCR_LAP /*!< Link allocated port 1 */

#define SPI_MASTER_INTERDATA_IDLENESS_00CYCLE         (0x00000000UL)
#define SPI_MASTER_INTERDATA_IDLENESS_01CYCLE         (0x00000010UL)
#define SPI_MASTER_INTERDATA_IDLENESS_02CYCLE         (0x00000020UL)
#define SPI_MASTER_INTERDATA_IDLENESS_03CYCLE         (0x00000030UL)
#define SPI_MASTER_INTERDATA_IDLENESS_04CYCLE         (0x00000040UL)
#define SPI_MASTER_INTERDATA_IDLENESS_05CYCLE         (0x00000050UL)
#define SPI_MASTER_INTERDATA_IDLENESS_06CYCLE         (0x00000060UL)
#define SPI_MASTER_INTERDATA_IDLENESS_07CYCLE         (0x00000070UL)
#define SPI_MASTER_INTERDATA_IDLENESS_08CYCLE         (0x00000080UL)
#define SPI_MASTER_INTERDATA_IDLENESS_09CYCLE         (0x00000090UL)
#define SPI_MASTER_INTERDATA_IDLENESS_10CYCLE         (0x000000A0UL)
#define SPI_MASTER_INTERDATA_IDLENESS_11CYCLE         (0x000000B0UL)
#define SPI_MASTER_INTERDATA_IDLENESS_12CYCLE         (0x000000C0UL)
#define SPI_MASTER_INTERDATA_IDLENESS_13CYCLE         (0x000000D0UL)
#define SPI_MASTER_INTERDATA_IDLENESS_14CYCLE         (0x000000E0UL)
#define SPI_MASTER_INTERDATA_IDLENESS_15CYCLE         (0x000000F0UL)

#define USART_CR1_FIELDS  ((uint32_t)(USART_CR1_M | USART_CR1_PCE | USART_CR1_PS | USART_CR1_TE | USART_CR1_RE | \
                                      USART_CR1_OVER8 | USART_CR1_FIFOEN)) /*!< UART or USART CR1 fields of parameters set by UART_SetConfig API */

#define UART_FLAG_TXE                       USART_ISR_TXE_TXFNF     /*!< UART transmit data register empty         */
#define UART_FLAG_TC                        USART_ISR_TC            /*!< UART transmission complete                */


/** @defgroup DMA_Flag_Definition DMA Flag Definition
  * @brief    DMA Flag Definition
  * @{
  */
#define DMA_FLAG_IDLE DMA_CSR_IDLEF /*!< Idle flag                          */
#define DMA_FLAG_TC   DMA_CSR_TCF   /*!< Transfer complete flag             */
#define DMA_FLAG_HT   DMA_CSR_HTF   /*!< Half transfer complete flag        */
#define DMA_FLAG_DTE  DMA_CSR_DTEF  /*!< Data transfer error flag           */
#define DMA_FLAG_ULE  DMA_CSR_ULEF  /*!< Update linked-list item error flag */
#define DMA_FLAG_USE  DMA_CSR_USEF  /*!< User setting error flag            */
#define DMA_FLAG_SUSP DMA_CSR_SUSPF /*!< Completed suspension flag          */
#define DMA_FLAG_TO   DMA_CSR_TOF   /*!< Trigger overrun flag               */

#ifndef MAIN_H_
#define MAIN_H_



#endif /* MAIN_H_ */
