/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MNSimpleNewGroupViewControllerConfiguration : FBValueObject <NSCopying> {

	NSArray* _pickedContacts;
	NSString* _suggestedName;
	unsigned long long _entryPoint;
	NSArray* _preselectedUserIds;
	NSString* _prefilledName;
	NSString* _promotionId;

}

@property (nonatomic,copy,readonly) NSArray * pickedContacts;                  //@synthesize pickedContacts=_pickedContacts - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestedName;                  //@synthesize suggestedName=_suggestedName - In the implementation block
@property (nonatomic,readonly) unsigned long long entryPoint;                  //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preselectedUserIds;              //@synthesize preselectedUserIds=_preselectedUserIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * prefilledName;                  //@synthesize prefilledName=_prefilledName - In the implementation block
@property (nonatomic,copy,readonly) NSString * promotionId;                    //@synthesize promotionId=_promotionId - In the implementation block
-(id)initWithPickedContacts:(id)arg1 suggestedName:(id)arg2 entryPoint:(unsigned long long)arg3 preselectedUserIds:(id)arg4 prefilledName:(id)arg5 promotionId:(id)arg6 ;
-(NSArray *)pickedContacts;
-(NSString *)suggestedName;
-(NSArray *)preselectedUserIds;
-(NSString *)prefilledName;
-(NSString *)promotionId;
-(unsigned long long)entryPoint;
@end

