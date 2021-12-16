void S12_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:44:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__34 = new TH1D("h__34","",58,1.108175,2.27221);
   h__34->SetBinContent(22,4);
   h__34->SetBinContent(23,3);
   h__34->SetBinContent(24,14);
   h__34->SetBinContent(25,39);
   h__34->SetBinContent(26,56);
   h__34->SetBinContent(27,91);
   h__34->SetBinContent(28,127);
   h__34->SetBinContent(29,133);
   h__34->SetBinContent(30,153);
   h__34->SetBinContent(31,129);
   h__34->SetBinContent(32,97);
   h__34->SetBinContent(33,58);
   h__34->SetBinContent(34,47);
   h__34->SetBinContent(35,27);
   h__34->SetBinContent(36,14);
   h__34->SetBinContent(37,4);
   h__34->SetBinContent(39,1);
   h__34->SetBinContent(40,2);
   h__34->SetBinContent(42,1);
   h__34->SetEntries(1000);
   h__34->SetStats(0);
   h__34->SetLineWidth(3);
   h__34->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__34->GetXaxis()->CenterTitle(true);
   h__34->GetXaxis()->SetLabelFont(42);
   h__34->GetXaxis()->SetTitleSize(0.04);
   h__34->GetXaxis()->SetTitleOffset(1.1);
   h__34->GetXaxis()->SetTitleFont(42);
   h__34->GetYaxis()->SetTitle("Trials");
   h__34->GetYaxis()->CenterTitle(true);
   h__34->GetYaxis()->SetNdivisions(4000510);
   h__34->GetYaxis()->SetLabelFont(42);
   h__34->GetYaxis()->SetTitleSize(0.04);
   h__34->GetYaxis()->SetTitleOffset(1.1);
   h__34->GetYaxis()->SetTitleFont(42);
   h__34->GetZaxis()->SetLabelFont(42);
   h__34->GetZaxis()->SetTitleOffset(1);
   h__34->GetZaxis()->SetTitleFont(42);
   h__34->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.695
#pm0.002
");
   pt_LaTex = pt->AddText("0.055
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
