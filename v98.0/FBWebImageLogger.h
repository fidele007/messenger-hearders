/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageLogger <NSObject>
@required
-(void)webImageViewLogImageWillShow:(id)arg1;
-(void)webImageView:(id)arg1 logImageDidShowWithURL:(id)arg2 withImageFlag:(unsigned long long)arg3 withImageWidth:(unsigned long long)arg4 isCached:(BOOL)arg5 completed:(BOOL)arg6;
-(void)webImageViewResetLog:(id)arg1;
-(void)webImageView:(id)arg1 logImageDidFailWithError:(id)arg2 URL:(id)arg3;

@end
