/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNSecureMessagingStore, MNSecureMessagingAttachmentDownloader, NSObject;

@interface MNSecureMessagingImageRequester : NSObject {

	MNSecureMessagingStore* _store;
	MNSecureMessagingAttachmentDownloader* _attachmentDownloader;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_validateAndDecryptAndPersistImageData:(id)arg1 encryptionKey:(id)arg2 attachmentId:(id)arg3 messageId:(id)arg4 threadKey:(id)arg5 fileHash:(id)arg6 success:(/*^block*/id)arg7 failure:(/*^block*/id)arg8 ;
-(void)_decryptAndPersistImageData:(id)arg1 encryptionKey:(id)arg2 attachmentId:(id)arg3 messageId:(id)arg4 threadKey:(id)arg5 success:(/*^block*/id)arg6 failure:(/*^block*/id)arg7 ;
-(id)initWithMessagingStore:(id)arg1 attachmentDownloader:(id)arg2 queue:(id)arg3 ;
-(id)fetchImageFromSecurePhotoSource:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end
