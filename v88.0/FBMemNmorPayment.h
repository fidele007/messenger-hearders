/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:00 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWildeMemModelObject.h>
#import <Messenger/MNPaymentsActivityDataModel.h>
#import <Messenger/MNPaymentsDataEntity.h>
#import <Messenger/FBQueriedNodeFieldsProtocol.h>
#import <Messenger/FBQueriedEntityFieldsProtocol.h>
#import <Messenger/FBQueriedMessengerPaymentFieldsProtocol.h>
#import <Messenger/FBQueriedPayTransactionFieldsProtocol.h>

@class NSString;

@interface FBMemNmorPayment : FBWildeMemModelObject <MNPaymentsActivityDataModel, MNPaymentsDataEntity, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedMessengerPaymentFieldsProtocol, FBQueriedPayTransactionFieldsProtocol>

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

