/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MQDataModelPersistence <NSObject>
@required
-(void)addAttributes:(id)arg1 options:(id)arg2;
-(void)parseAttributes:(id)arg1 options:(id)arg2;
-(id)serialize:(id)arg1 options:(id)arg2;
-(void)parse:(id)arg1 relations:(id)arg2 fileController:(id)arg3 options:(id)arg4;
-(id)serializableChildren;
-(void)mapChildModel:(id)arg1;
-(void)restoreChildren;
-(id)tagName;

@end
