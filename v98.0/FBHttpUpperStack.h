/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBInvalidating.h>

@protocol FBTigonServiceProvider;
@class NSString;

@interface FBHttpUpperStack : NSObject <FBInvalidating> {

	unique_ptr<(anonymous namespace)::UpperStaticStack, std::__1::default_delete<(anonymous namespace)::UpperStaticStack> >* _upperStaticStack;
	shared_ptr<(anonymous namespace)::UpperSwappableStack>* _upperSwappableStack;
	id<FBTigonServiceProvider> _underlyingStack;
	mutex _swapLock;
	BOOL _valid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)initWithConfiguration:(id)arg1 tigonService:(id)arg2 ;
-(id)applyPlugins:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(BOOL)isValid;
-(TigonService*)service;
-(void)configure:(id)arg1 ;
@end

