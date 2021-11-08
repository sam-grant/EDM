void S0_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__57 = new TH1D("h__57","",64,1.276045,2.557864);
   h__57->SetBinContent(21,2);
   h__57->SetBinContent(22,3);
   h__57->SetBinContent(23,3);
   h__57->SetBinContent(24,10);
   h__57->SetBinContent(25,14);
   h__57->SetBinContent(26,29);
   h__57->SetBinContent(27,32);
   h__57->SetBinContent(28,49);
   h__57->SetBinContent(29,63);
   h__57->SetBinContent(30,81);
   h__57->SetBinContent(31,78);
   h__57->SetBinContent(32,75);
   h__57->SetBinContent(33,97);
   h__57->SetBinContent(34,88);
   h__57->SetBinContent(35,90);
   h__57->SetBinContent(36,62);
   h__57->SetBinContent(37,56);
   h__57->SetBinContent(38,39);
   h__57->SetBinContent(39,35);
   h__57->SetBinContent(40,27);
   h__57->SetBinContent(41,29);
   h__57->SetBinContent(42,14);
   h__57->SetBinContent(43,9);
   h__57->SetBinContent(44,4);
   h__57->SetBinContent(45,5);
   h__57->SetBinContent(46,1);
   h__57->SetBinContent(47,1);
   h__57->SetBinContent(49,1);
   h__57->SetBinContent(50,1);
   h__57->SetBinContent(51,1);
   h__57->SetBinContent(54,1);
   h__57->SetEntries(1000);
   h__57->SetStats(0);
   h__57->SetLineWidth(3);
   h__57->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__57->GetXaxis()->CenterTitle(true);
   h__57->GetXaxis()->SetLabelFont(42);
   h__57->GetXaxis()->SetTitleSize(0.04);
   h__57->GetXaxis()->SetTitleOffset(1.1);
   h__57->GetXaxis()->SetTitleFont(42);
   h__57->GetYaxis()->SetTitle("Trials");
   h__57->GetYaxis()->CenterTitle(true);
   h__57->GetYaxis()->SetNdivisions(4000510);
   h__57->GetYaxis()->SetLabelFont(42);
   h__57->GetYaxis()->SetTitleSize(0.04);
   h__57->GetYaxis()->SetTitleOffset(1.1);
   h__57->GetYaxis()->SetTitleFont(42);
   h__57->GetZaxis()->SetLabelFont(42);
   h__57->GetZaxis()->SetTitleOffset(1);
   h__57->GetZaxis()->SetTitleFont(42);
   h__57->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.932
#pm0.003
");
   pt_LaTex = pt->AddText("0.091
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
