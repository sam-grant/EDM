void S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:53:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__56 = new TH1D("h__56","",64,1.02432,2.318964);
   h__56->SetBinContent(19,1);
   h__56->SetBinContent(20,1);
   h__56->SetBinContent(21,2);
   h__56->SetBinContent(22,2);
   h__56->SetBinContent(23,8);
   h__56->SetBinContent(24,8);
   h__56->SetBinContent(25,24);
   h__56->SetBinContent(26,34);
   h__56->SetBinContent(27,34);
   h__56->SetBinContent(28,53);
   h__56->SetBinContent(29,63);
   h__56->SetBinContent(30,67);
   h__56->SetBinContent(31,75);
   h__56->SetBinContent(32,77);
   h__56->SetBinContent(33,79);
   h__56->SetBinContent(34,83);
   h__56->SetBinContent(35,91);
   h__56->SetBinContent(36,53);
   h__56->SetBinContent(37,53);
   h__56->SetBinContent(38,48);
   h__56->SetBinContent(39,34);
   h__56->SetBinContent(40,24);
   h__56->SetBinContent(41,27);
   h__56->SetBinContent(42,21);
   h__56->SetBinContent(43,14);
   h__56->SetBinContent(44,5);
   h__56->SetBinContent(45,8);
   h__56->SetBinContent(46,3);
   h__56->SetBinContent(47,2);
   h__56->SetBinContent(48,1);
   h__56->SetBinContent(49,1);
   h__56->SetBinContent(51,1);
   h__56->SetBinContent(53,1);
   h__56->SetBinContent(54,1);
   h__56->SetBinContent(58,1);
   h__56->SetEntries(1000);
   h__56->SetStats(0);
   h__56->SetLineWidth(3);
   h__56->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__56->GetXaxis()->CenterTitle(true);
   h__56->GetXaxis()->SetLabelFont(42);
   h__56->GetXaxis()->SetTitleSize(0.04);
   h__56->GetXaxis()->SetTitleOffset(1.1);
   h__56->GetXaxis()->SetTitleFont(42);
   h__56->GetYaxis()->SetTitle("Trials");
   h__56->GetYaxis()->CenterTitle(true);
   h__56->GetYaxis()->SetNdivisions(4000510);
   h__56->GetYaxis()->SetLabelFont(42);
   h__56->GetYaxis()->SetTitleSize(0.04);
   h__56->GetYaxis()->SetTitleOffset(1.1);
   h__56->GetYaxis()->SetTitleFont(42);
   h__56->GetZaxis()->SetLabelFont(42);
   h__56->GetZaxis()->SetTitleOffset(1);
   h__56->GetZaxis()->SetTitleFont(42);
   h__56->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.688
#pm0.003
");
   pt_LaTex = pt->AddText("0.1
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
