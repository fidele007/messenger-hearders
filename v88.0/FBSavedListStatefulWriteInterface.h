/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSectionedDataSourceWriting.h>

@protocol FBSectionedDataSourceWriting;
@class CKSectionedArrayController, NSString;

@interface FBSavedListStatefulWriteInterface : NSObject <FBSectionedDataSourceWriting> {

	id<FBSectionedDataSourceWriting> _writeInterface;
	CKSectionedArrayController* _cachedState;

}

@property (nonatomic,readonly) CKSectionedArrayController * cachedState;              //@synthesize cachedState=_cachedState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2 ;
-(void)enqueueReload;
-(id)initWithWriteInterface:(id)arg1 ;
-(CKSectionedArrayController *)cachedState;
@end

