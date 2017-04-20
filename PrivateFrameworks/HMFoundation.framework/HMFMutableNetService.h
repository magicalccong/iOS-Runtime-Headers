/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFMutableNetService : HMFNetService {
    unsigned int  _port;
    id /* block */  _publishBlock;
    BOOL  _publishing;
}

@property (nonatomic, copy) NSDictionary *TXTRecord;
@property (nonatomic) unsigned int port;
@property (nonatomic, copy) id /* block */ publishBlock;
@property (getter=isPublishing) BOOL publishing;

- (void).cxx_destruct;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned int)arg4;
- (id)initWithNetService:(id)arg1;
- (id)internal;
- (BOOL)isPublishing;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (unsigned int)port;
- (id /* block */)publishBlock;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setPort:(unsigned int)arg1;
- (void)setPublishBlock:(id /* block */)arg1;
- (void)setPublishing:(BOOL)arg1;
- (void)setTXTRecord:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
- (void)startPublishingWithCompletionHandler:(id /* block */)arg1;
- (void)stopPublishing;
- (void)updateTXTRecord;
- (void)updateTXTRecordWithData:(id)arg1;

@end