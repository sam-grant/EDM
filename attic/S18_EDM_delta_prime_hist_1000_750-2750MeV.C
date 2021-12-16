void S18_EDM_delta_prime_hist_1000_750-2750MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:11:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__63 = new TH1D("h__63","",70,0.9292922,2.33982);
   h__63->SetBinContent(16,1);
   h__63->SetBinContent(19,1);
   h__63->SetBinContent(21,2);
   h__63->SetBinContent(22,3);
   h__63->SetBinContent(23,4);
   h__63->SetBinContent(24,9);
   h__63->SetBinContent(25,11);
   h__63->SetBinContent(26,16);
   h__63->SetBinContent(27,25);
   h__63->SetBinContent(28,22);
   h__63->SetBinContent(29,38);
   h__63->SetBinContent(30,43);
   h__63->SetBinContent(31,33);
   h__63->SetBinContent(32,56);
   h__63->SetBinContent(33,40);
   h__63->SetBinContent(34,58);
   h__63->SetBinContent(35,54);
   h__63->SetBinContent(36,54);
   h__63->SetBinContent(37,52);
   h__63->SetBinContent(38,47);
   h__63->SetBinContent(39,61);
   h__63->SetBinContent(40,43);
   h__63->SetBinContent(41,54);
   h__63->SetBinContent(42,51);
   h__63->SetBinContent(43,24);
   h__63->SetBinContent(44,22);
   h__63->SetBinContent(45,35);
   h__63->SetBinContent(46,23);
   h__63->SetBinContent(47,23);
   h__63->SetBinContent(48,17);
   h__63->SetBinContent(49,13);
   h__63->SetBinContent(50,17);
   h__63->SetBinContent(51,11);
   h__63->SetBinContent(52,9);
   h__63->SetBinContent(53,3);
   h__63->SetBinContent(54,4);
   h__63->SetBinContent(55,8);
   h__63->SetBinContent(56,2);
   h__63->SetBinContent(57,2);
   h__63->SetBinContent(59,1);
   h__63->SetBinContent(60,1);
   h__63->SetBinContent(62,2);
   h__63->SetBinContent(64,1);
   h__63->SetBinContent(68,3);
   h__63->SetBinContent(71,1);
   h__63->SetEntries(1000);
   h__63->SetStats(0);
   h__63->SetLineWidth(3);
   h__63->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__63->GetXaxis()->CenterTitle(true);
   h__63->GetXaxis()->SetLabelFont(42);
   h__63->GetXaxis()->SetTitleSize(0.04);
   h__63->GetXaxis()->SetTitleOffset(1.1);
   h__63->GetXaxis()->SetTitleFont(42);
   h__63->GetYaxis()->SetTitle("Trials");
   h__63->GetYaxis()->CenterTitle(true);
   h__63->GetYaxis()->SetNdivisions(4000510);
   h__63->GetYaxis()->SetLabelFont(42);
   h__63->GetYaxis()->SetTitleSize(0.04);
   h__63->GetYaxis()->SetTitleOffset(1.1);
   h__63->GetYaxis()->SetTitleFont(42);
   h__63->GetZaxis()->SetLabelFont(42);
   h__63->GetZaxis()->SetTitleOffset(1);
   h__63->GetZaxis()->SetTitleFont(42);
   h__63->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("1.676
#pm0.005
");
   pt_LaTex = pt->AddText("0.15
#pm0.003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
