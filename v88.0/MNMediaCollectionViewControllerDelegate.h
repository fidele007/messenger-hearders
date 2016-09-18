/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMediaCollectionViewControllerDelegate <NSObject>
@optional
-(void)mediaCollectionViewController:(id)arg1 didLoadNumberOfContents:(unsigned long long)arg2;
-(void)mediaCollectionViewController:(id)arg1 didLoadMediaAppID:(id)arg2 numberOfBytes:(unsigned long long)arg3 elapsedTime:(double)arg4;
-(void)mediaCollectionViewController:(id)arg1 didLoadFirstPageWithElapsedTime:(double)arg2;
-(void)mediaCollectionViewController:(id)arg1 willLoadMediaFromMediaFetcher:(id)arg2;

@required
-(void)mediaCollectionViewController:(id)arg1 didSelectContent:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)mediaCollectionViewControllerDidDeselectContent:(id)arg1;
-(void)mediaCollectionViewControllerDidChangePreferredSize:(id)arg1;
-(void)mediaCollectionViewController:(id)arg1 didSelectPlatformApplication:(id)arg2;

@end
