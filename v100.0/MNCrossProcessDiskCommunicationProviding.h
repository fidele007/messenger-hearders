/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCrossProcessDiskCommunicationProviding <NSObject>
@required
-(id)diskWriterForOverwritingContentType:(long long)arg1;
-(id)diskReaderForAppendingContentType:(long long)arg1;
-(id)diskPurgerForAppendingContentType:(long long)arg1;
-(id)diskWriterForAppendingContentType:(long long)arg1;
-(id)diskReaderForOverwritingContentType:(long long)arg1;

@end
