/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKComponentPreparationItem.h>

@protocol NSObject;
@class CKComponentLifecycleManager, NSString, NSIndexPath;

@interface CKComponentPreparationOutputItem : NSObject <CKComponentPreparationItem> {

	CKComponentLifecycleManagerState* _lifecycleManagerState;
	BOOL _passthrough;
	id<NSObject> _replacementModel;
	CKComponentLifecycleManager* _lifecycleManager;
	NSString* _UUID;
	NSIndexPath* _sourceIndexPath;
	NSIndexPath* _destinationIndexPath;
	unsigned long long _changeType;
	id<NSObject> _context;
	CGSize _oldSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSObject> replacementModel;                               //@synthesize replacementModel=_replacementModel - In the implementation block
@property (nonatomic,readonly) CKComponentLifecycleManager * lifecycleManager;              //@synthesize lifecycleManager=_lifecycleManager - In the implementation block
@property (nonatomic,readonly) CGSize oldSize;                                              //@synthesize oldSize=_oldSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUID;                                        //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * sourceIndexPath;                          //@synthesize sourceIndexPath=_sourceIndexPath - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * destinationIndexPath;                     //@synthesize destinationIndexPath=_destinationIndexPath - In the implementation block
@property (nonatomic,readonly) unsigned long long changeType;                               //@synthesize changeType=_changeType - In the implementation block
@property (getter=isPassthrough,nonatomic,readonly) BOOL passthrough;                       //@synthesize passthrough=_passthrough - In the implementation block
@property (nonatomic,readonly) id<NSObject> context;                                        //@synthesize context=_context - In the implementation block
-(CKComponentLifecycleManager *)lifecycleManager;
-(CKComponentLifecycleManagerState*)lifecycleManagerState;
-(NSIndexPath *)destinationIndexPath;
-(BOOL)isPassthrough;
-(id<NSObject>)replacementModel;
-(id)initWithReplacementModel:(id)arg1 lifecycleManager:(id)arg2 lifecycleManagerState:(CKComponentLifecycleManagerState*)arg3 oldSize:(CGSize)arg4 UUID:(id)arg5 sourceIndexPath:(id)arg6 destinationIndexPath:(id)arg7 changeType:(unsigned long long)arg8 passthrough:(BOOL)arg9 context:(id)arg10 ;
-(id)init;
-(id<NSObject>)context;
-(NSString *)UUID;
-(CGSize)oldSize;
-(unsigned long long)changeType;
-(NSIndexPath *)sourceIndexPath;
@end

