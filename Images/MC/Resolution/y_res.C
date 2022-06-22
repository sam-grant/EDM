void y_res()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 13:41:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *y_res__3 = new TH1D("y_res__3","",60,-30,30);
   y_res__3->SetBinContent(0,6);
   y_res__3->SetBinContent(1,1);
   y_res__3->SetBinContent(4,2);
   y_res__3->SetBinContent(5,1);
   y_res__3->SetBinContent(7,1);
   y_res__3->SetBinContent(8,3);
   y_res__3->SetBinContent(9,3);
   y_res__3->SetBinContent(10,2);
   y_res__3->SetBinContent(11,1);
   y_res__3->SetBinContent(12,3);
   y_res__3->SetBinContent(13,6);
   y_res__3->SetBinContent(14,8);
   y_res__3->SetBinContent(15,18);
   y_res__3->SetBinContent(16,16);
   y_res__3->SetBinContent(17,33);
   y_res__3->SetBinContent(18,25);
   y_res__3->SetBinContent(19,60);
   y_res__3->SetBinContent(20,129);
   y_res__3->SetBinContent(21,175);
   y_res__3->SetBinContent(22,372);
   y_res__3->SetBinContent(23,769);
   y_res__3->SetBinContent(24,1480);
   y_res__3->SetBinContent(25,3311);
   y_res__3->SetBinContent(26,6657);
   y_res__3->SetBinContent(27,12575);
   y_res__3->SetBinContent(28,21334);
   y_res__3->SetBinContent(29,31422);
   y_res__3->SetBinContent(30,39458);
   y_res__3->SetBinContent(31,39565);
   y_res__3->SetBinContent(32,31815);
   y_res__3->SetBinContent(33,21866);
   y_res__3->SetBinContent(34,12773);
   y_res__3->SetBinContent(35,6783);
   y_res__3->SetBinContent(36,3275);
   y_res__3->SetBinContent(37,1552);
   y_res__3->SetBinContent(38,768);
   y_res__3->SetBinContent(39,397);
   y_res__3->SetBinContent(40,197);
   y_res__3->SetBinContent(41,99);
   y_res__3->SetBinContent(42,61);
   y_res__3->SetBinContent(43,39);
   y_res__3->SetBinContent(44,25);
   y_res__3->SetBinContent(45,20);
   y_res__3->SetBinContent(46,8);
   y_res__3->SetBinContent(47,4);
   y_res__3->SetBinContent(48,5);
   y_res__3->SetBinContent(49,4);
   y_res__3->SetBinContent(50,2);
   y_res__3->SetBinContent(51,1);
   y_res__3->SetBinContent(52,2);
   y_res__3->SetBinContent(56,2);
   y_res__3->SetBinContent(57,2);
   y_res__3->SetBinContent(58,1);
   y_res__3->SetBinContent(61,2);
   y_res__3->SetEntries(237139);
   y_res__3->SetStats(0);
   y_res__3->SetLineWidth(2);
   y_res__3->GetXaxis()->SetTitle("#Delta y (truth #minus reco) [mm]");
   y_res__3->GetXaxis()->CenterTitle(true);
   y_res__3->GetXaxis()->SetLabelFont(42);
   y_res__3->GetXaxis()->SetTitleSize(0.04);
   y_res__3->GetXaxis()->SetTitleOffset(1.1);
   y_res__3->GetXaxis()->SetTitleFont(42);
   y_res__3->GetYaxis()->SetTitle("Decay vertices / 1
 mm");
   y_res__3->GetYaxis()->CenterTitle(true);
   y_res__3->GetYaxis()->SetNdivisions(4000510);
   y_res__3->GetYaxis()->SetLabelFont(42);
   y_res__3->GetYaxis()->SetTitleSize(0.04);
   y_res__3->GetYaxis()->SetTitleOffset(1.2);
   y_res__3->GetYaxis()->SetTitleFont(42);
   y_res__3->GetZaxis()->SetLabelFont(42);
   y_res__3->GetZaxis()->SetTitleOffset(1);
   y_res__3->GetZaxis()->SetTitleFont(42);
   y_res__3->Draw("HIST ][");
   
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
   pt_LaTex = pt->AddText("0.014
#pm0.005
");
   pt_LaTex = pt->AddText("2.594
#pm0.004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
