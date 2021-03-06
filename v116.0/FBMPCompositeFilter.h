/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMPFilter.h>
#import <Messenger/FBMPPermissiveOutput.h>

@protocol FBMPFilter;
@class NSString, NSArray;

@interface FBMPCompositeFilter : NSObject <FBMPFilter, FBMPPermissiveOutput> {

	id<FBMPFilter> _innerFilter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * producerPorts; 
+(id)newWithFilter:(id)arg1 ;
-(NSArray *)producerPorts;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(id)consumerPorts;
-(void)sessionWillStop:(id)arg1 ;
-(BOOL)allowsConnectionsWithConsumerPortMapping:(id)arg1 ;
-(id)initWithFilter:(id)arg1 ;
@end

