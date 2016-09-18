/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocalContactsUploader.h>

@protocol FBLocalContactsUploader, FBContactsStore, FBLocalContactsSyncDifferDelegate;
@class NSString;

@interface FBLocalContactsSyncDiffer : NSObject <FBLocalContactsUploader> {

	id<FBLocalContactsUploader> _localContactsUploader;
	id<FBContactsStore> _previouslySyncedContactsStore;
	id<FBLocalContactsSyncDifferDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLocalContactsSyncDifferDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelContactsUpload;
-(void)uploadContacts:(id)arg1 importId:(id)arg2 ;
-(id)initWithLocalContactsUploader:(id)arg1 previouslySyncedContactsStore:(id)arg2 ;
-(void)setDelegate:(id<FBLocalContactsSyncDifferDelegate>)arg1 ;
-(id<FBLocalContactsSyncDifferDelegate>)delegate;
@end

