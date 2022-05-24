void y_res()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May 22 13:26:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *y_res__1 = new TH1D("y_res__1","",60,-30,30);
   y_res__1->SetBinContent(0,13);
   y_res__1->SetBinContent(2,4);
   y_res__1->SetBinContent(3,5);
   y_res__1->SetBinContent(4,3);
   y_res__1->SetBinContent(5,7);
   y_res__1->SetBinContent(6,10);
   y_res__1->SetBinContent(7,6);
   y_res__1->SetBinContent(8,9);
   y_res__1->SetBinContent(9,13);
   y_res__1->SetBinContent(10,30);
   y_res__1->SetBinContent(11,29);
   y_res__1->SetBinContent(12,42);
   y_res__1->SetBinContent(13,54);
   y_res__1->SetBinContent(14,73);
   y_res__1->SetBinContent(15,99);
   y_res__1->SetBinContent(16,176);
   y_res__1->SetBinContent(17,215);
   y_res__1->SetBinContent(18,397);
   y_res__1->SetBinContent(19,629);
   y_res__1->SetBinContent(20,1151);
   y_res__1->SetBinContent(21,2117);
   y_res__1->SetBinContent(22,4039);
   y_res__1->SetBinContent(23,8198);
   y_res__1->SetBinContent(24,17188);
   y_res__1->SetBinContent(25,36362);
   y_res__1->SetBinContent(26,76737);
   y_res__1->SetBinContent(27,146146);
   y_res__1->SetBinContent(28,250084);
   y_res__1->SetBinContent(29,373844);
   y_res__1->SetBinContent(30,474217);
   y_res__1->SetBinContent(31,473667);
   y_res__1->SetBinContent(32,378161);
   y_res__1->SetBinContent(33,252182);
   y_res__1->SetBinContent(34,147320);
   y_res__1->SetBinContent(35,77447);
   y_res__1->SetBinContent(36,37312);
   y_res__1->SetBinContent(37,17499);
   y_res__1->SetBinContent(38,8305);
   y_res__1->SetBinContent(39,4143);
   y_res__1->SetBinContent(40,2213);
   y_res__1->SetBinContent(41,1210);
   y_res__1->SetBinContent(42,704);
   y_res__1->SetBinContent(43,382);
   y_res__1->SetBinContent(44,235);
   y_res__1->SetBinContent(45,160);
   y_res__1->SetBinContent(46,111);
   y_res__1->SetBinContent(47,83);
   y_res__1->SetBinContent(48,51);
   y_res__1->SetBinContent(49,41);
   y_res__1->SetBinContent(50,30);
   y_res__1->SetBinContent(51,23);
   y_res__1->SetBinContent(52,19);
   y_res__1->SetBinContent(53,14);
   y_res__1->SetBinContent(54,7);
   y_res__1->SetBinContent(55,8);
   y_res__1->SetBinContent(56,6);
   y_res__1->SetBinContent(57,10);
   y_res__1->SetBinContent(58,6);
   y_res__1->SetBinContent(59,3);
   y_res__1->SetBinContent(60,4);
   y_res__1->SetBinContent(61,31);
   y_res__1->SetEntries(2793284);
   y_res__1->SetStats(0);
   y_res__1->SetLineWidth(2);
   y_res__1->GetXaxis()->SetTitle("#Delta y (truth #minus reco) [mm]");
   y_res__1->GetXaxis()->CenterTitle(true);
   y_res__1->GetXaxis()->SetLabelFont(42);
   y_res__1->GetXaxis()->SetTitleSize(0.04);
   y_res__1->GetXaxis()->SetTitleOffset(1.1);
   y_res__1->GetXaxis()->SetTitleFont(42);
   y_res__1->GetYaxis()->SetTitle("Decay vertices / 1
 mm");
   y_res__1->GetYaxis()->CenterTitle(true);
   y_res__1->GetYaxis()->SetNdivisions(4000510);
   y_res__1->GetYaxis()->SetLabelFont(42);
   y_res__1->GetYaxis()->SetTitleSize(0.04);
   y_res__1->GetYaxis()->SetTitleOffset(1.1);
   y_res__1->GetYaxis()->SetTitleFont(42);
   y_res__1->GetZaxis()->SetLabelFont(42);
   y_res__1->GetZaxis()->SetTitleOffset(1);
   y_res__1->GetZaxis()->SetTitleFont(42);
   y_res__1->Draw("HIST ][");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   TText *pt_LaTex = pt->AddText("#LT#Deltay#GT [mm]");
   pt_LaTex = pt->AddText("#sigma_{y} [mm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   pt_LaTex = pt->AddText("0.011
#pm0.002
");
   pt_LaTex = pt->AddText("2.549
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
