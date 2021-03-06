/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager;

@interface IGDirectoryFinder : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(id)URLforUserDomainDirectory:(unsigned long long)arg1 ;
-(id)cachesDirectoryURL;
-(id)temporaryDirectoryURL;
-(id)trashDirectoryURL;
-(id)init;
-(id)initWithFileManager:(id)arg1 ;
-(NSFileManager *)fileManager;
-(id)documentsDirectoryURL;
@end

