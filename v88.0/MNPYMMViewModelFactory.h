/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNThreadImageManager, MNThreadParticipantNameFormatter;

@interface MNPYMMViewModelFactory : NSObject {

	MNThreadImageManager* _threadImageManager;
	MNThreadParticipantNameFormatter* _nameFormatter;

}
-(id)initWithThreadImageManager:(id)arg1 nameFormatter:(id)arg2 ;
-(id)pymmViewModelForPYMMUsers:(id)arg1 collectionId:(id)arg2 collectionViewWidth:(double)arg3 pymmOrder:(id)arg4 userIdToUserMap:(id)arg5 userIdToLoggingDataMap:(id)arg6 threadCellLayout:(id)arg7 pymmCanBeHidden:(BOOL)arg8 ;
@end
