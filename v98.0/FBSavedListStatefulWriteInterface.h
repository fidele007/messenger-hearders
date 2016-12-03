/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(id)initWithWriteInterface:(id)arg1 ;
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2 ;
-(CKSectionedArrayController *)cachedState;
-(void)enqueueReload;
@end
