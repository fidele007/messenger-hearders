/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBResponseProcessorDelegate.h>
#import <Messenger/FBReceivedDataBufferDelegate.h>
#import <Messenger/FBResponseHandling.h>

@protocol FBReceivedDataBufferProtocol, FBRequest, FBResponseHandlerDelegate;
@class FBResponseProcessor, FBResponseProcessorConfiguration, NSHTTPURLResponse, NSString;

@interface FBHTTPErrorResponseHandler : NSObject <FBResponseProcessorDelegate, FBReceivedDataBufferDelegate, FBResponseHandling> {

	FBResponseProcessor* _processor;
	FBResponseProcessorConfiguration* _configuration;
	id<FBReceivedDataBufferProtocol> _receivedDataBuffer;
	NSHTTPURLResponse* _HTTPURLResponse;
	id<FBRequest> _request;
	id<FBResponseHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                                    //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<FBResponseHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)receivedDataBuffer:(id)arg1 didReceiveData:(id)arg2 ;
-(void)receivedDataBuffer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)responseProcessor:(id)arg1 didProcessResponse:(id)arg2 ;
-(void)responseProcessor:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithRequest:(id)arg1 HTTPURLResponse:(id)arg2 ;
-(void)setDelegate:(id<FBResponseHandlerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<FBResponseHandlerDelegate>)delegate;
-(id<FBRequest>)request;
-(void)close;
-(void)open;
-(void)handleData:(id)arg1 ;
-(void)abort;
@end

