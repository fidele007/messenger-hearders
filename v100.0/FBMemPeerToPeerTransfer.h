/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/MNPaymentsDataEntity.h>
#import <Messenger/MNPaymentsActivityDataModel.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedMessengerPaymentFieldsProtocol.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>
#import <Messenger/FBQueriedPayTransactionFieldsProtocol.h>

@class NSString;

@interface FBMemPeerToPeerTransfer : FBWildeMemModelObject <MNPaymentsDataEntity, MNPaymentsActivityDataModel, FBQueriedEntityFieldsProtocol, FBQueriedMessengerPaymentFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedPayTransactionFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)styleIdentifier;
-(long long)directionTypeWithCurrentUserId:(id)arg1 ;
-(BOOL)hasCharged;
-(id)dataEntityKey;
-(BOOL)containsSameDataAsDataEntity:(id)arg1 ;
-(id)dataEntityUpdatedTime;
-(id)activityType;
-(id)activityId;
@end

