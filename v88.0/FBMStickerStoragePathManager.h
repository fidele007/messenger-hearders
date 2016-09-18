/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStickerUserSettings;
@class NSString, FBDeprecatedDirectoryRemover;

@interface FBMStickerStoragePathManager : NSObject {

	id<FBStickerUserSettings> _userSettings;
	NSString* _stickerRootDirectory;
	long long _initStickerRootDirectoryToken;
	FBDeprecatedDirectoryRemover* _deprecatedDirectoryRemover;

}
-(id)initWithUserSettings:(id)arg1 ;
-(id)generateStickerStoragePath;
-(id)_generateStorageFilename;
-(id)stickerRootDirectoryPath;
@end

