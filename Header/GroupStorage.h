//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMCGIDelegate.h"
#import "MMService.h"

@class GetContactLogic, GetGroupMemberLogic, GroupDB, NSLock, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GroupStorage : MMService <MMCGIDelegate, MMService>
{
    GroupDB *m_groupDB;
    unsigned int m_uLoadedType;
    GetContactLogic *_getContactLogic;
    GetGroupMemberLogic *_getMemberContactLogic;
    BOOL m_isStorageIntialed;
    NSLock *m_lock;
    NSMutableDictionary *m_dictGroupContacts;
    NSMutableDictionary *m_dictGroupMembers;
    NSMutableArray *m_arrMembersNotInDB;
    BOOL m_hasClearData;
    NSMutableDictionary *_getMemberDetailTasks;
    BOOL _m_isStorageIntialed;
}

+ (void)DeleteGroupDatabase;
@property(nonatomic) BOOL m_isStorageIntialed; // @synthesize m_isStorageIntialed=_m_isStorageIntialed;
- (void).cxx_destruct;
- (id)GetAllGroups;
- (void)UpdateGroupContactFromSvr:(id)arg1;
- (BOOL)GetGroupMemberContactFromSvrWithUsername:(id)arg1 groupUserName:(id)arg2;
- (BOOL)GetGroupContactsFromSvrWithUserNameSet:(id)arg1;
- (BOOL)DeleteGroupContactByUI:(id)arg1 ListType:(unsigned int)arg2;
- (void)ModifyGroupChatMemberData:(id)arg1 withUserName:(id)arg2;
- (void)ModifyGroupChatMemberWithContactList:(id)arg1;
- (void)SetGroupChatAnnouncementWithGroupUserName:(id)arg1 announceContent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)GetGroupChatAnnouncementWithGroupUserName:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)UpdateGroupChatMemberDetailWithGroupUserName:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)UpdateGroupChatMemberDetailWithGroupUserName:(id)arg1;
- (BOOL)ModifyShowInAddressBook:(BOOL)arg1 withGroupUsrName:(id)arg2;
- (BOOL)ModifyShouldShowGroupDisplayName:(BOOL)arg1 withGroupUsrName:(id)arg2 selfUsrName:(id)arg3 syncToServer:(BOOL)arg4;
- (BOOL)ModifyChatStatusNotifyOpen:(BOOL)arg1 withGroupUserName:(id)arg2 syncToServer:(BOOL)arg3;
- (BOOL)ModifyIsTop:(BOOL)arg1 withGroupUsrName:(id)arg2 syncToServer:(BOOL)arg3;
- (BOOL)ModifyGroupChatName:(id)arg1 withGroupUserName:(id)arg2;
- (unsigned long long)GetGroupMemberCountWithGroupUserName:(id)arg1;
- (id)GetGroupMemberListWithGroupUserName:(id)arg1;
- (id)GetGroupMemberListWithGroupUserName:(id)arg1 limit:(unsigned int)arg2;
- (id)GetGroupContactList:(unsigned int)arg1 ContactType:(unsigned int)arg2;
- (id)GetGroupMemberContact:(id)arg1;
- (BOOL)IsGroupMemberContactExist:(id)arg1;
- (id)GetGroupContactsWithUserNames:(id)arg1;
- (id)GetGroupContact:(id)arg1;
- (BOOL)IsGroupContactExist:(id)arg1;
- (void)SetStorageIntialed;
- (BOOL)IsStorageIntialed;
- (BOOL)DeleteGroupMemberWithGroupUserName:(id)arg1 memberUserNameList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)InviteGroupMemberWithChatRoomName:(id)arg1 memberList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)AddGroupMembers:(id)arg1 withGroupUserName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)QuitGroup:(id)arg1;
- (void)CreateGroupChatWithTopic:(id)arg1 groupMembers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)notifyModifyGroupContactOnMainThread:(id)arg1;
- (void)notifyDeleleteGroupContactOnMainThread:(id)arg1;
- (id)genGroupMemberFromRoomInfo:(id)arg1;
- (id)genGroupMemberFromModContact:(id)arg1;
- (id)genGroupContactFromModContact:(id)arg1 dicGroupMember:(id)arg2;
- (BOOL)deleteMemberContactInLocal:(id)arg1;
- (BOOL)deleteGroupContactInLocal:(id)arg1;
- (void)deleteGroupMember:(id)arg1 removedMemberNameList:(id)arg2;
- (void)addOrModifyGroupMembers:(id)arg1;
- (void)addOrModifyGroupContact:(id)arg1 arrMembersList:(id)arg2;
- (BOOL)loadGroupContactsWithType:(unsigned int)arg1;
- (void)removeGroupMemberContactCache:(id)arg1;
- (void)setGroupMemberContactsCache:(id)arg1;
- (void)setGroupMemberContactCache:(id)arg1;
- (id)getGroupMemberContactCache:(id)arg1;
- (void)removeGroupContactCache:(id)arg1;
- (void)setGroupContactsCache:(id)arg1;
- (void)setGroupContactCache:(id)arg1;
- (id)getGroupContactCacheKeys;
- (unsigned long long)getGroupContactCacheCount;
- (id)getGroupContactCache:(id)arg1;
- (BOOL)isGroupMemberNeedUpdate:(id)arg1;
- (void)modifyGroupMembersContact:(id)arg1 onlyInsertNew:(BOOL)arg2;
- (BOOL)DeleteGroupContactOnDelCmd:(id)arg1;
- (void)OnModGroupMemberContacts_Thread:(id)arg1;
- (void)OnModGroupContacts_Thread:(id)arg1;
- (BOOL)ModifyImgStatus:(id)arg1 imgStatus:(id)arg2 isMember:(BOOL)arg3;
- (BOOL)addOplog_ModifyShowDisplayNameWithGroupChatUserName:(id)arg1 usrName:(id)arg2 flag:(unsigned int)arg3 open:(BOOL)arg4 sync:(BOOL)arg5;
- (BOOL)addOplog_ModifyNotifyStatus:(id)arg1 withStatus:(unsigned int)arg2 sync:(BOOL)arg3;
- (unsigned int)ChatNotifyC2S:(unsigned int)arg1;
- (BOOL)addOpLog_SetGroupTopic:(id)arg1 withTopic:(id)arg2 NeedSync:(BOOL)arg3;
- (BOOL)addOplog_QuitGroup:(id)arg1 withUsrName:(id)arg2 NeedSync:(BOOL)arg3;
- (BOOL)addOpLog_ModifyGroupContact:(id)arg1 addScene:(unsigned int)arg2 sync:(BOOL)arg3;
- (BOOL)addOpLog_ModifyGroupContact:(id)arg1 sync:(BOOL)arg2;
- (void)UICreateGroup:(id)arg1 withMemberList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contactWithMemberResp:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)addChatMemberNeedVerifyMsg:(id)arg1 ContactList:(id)arg2;
- (void)addCreateMsg:(id)arg1 ContactList:(id)arg2;
- (BOOL)UIDeleteGroupMember:(id)arg1 withMemberList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)UIAddGroupMember:(id)arg1 withMemberList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)UIQuitGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

