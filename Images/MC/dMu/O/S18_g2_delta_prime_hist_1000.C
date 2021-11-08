void S18_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__8 = new TH1D("h__8","",51,-0.1127222,0.9228262);
   h__8->SetBinContent(21,11);
   h__8->SetBinContent(22,43);
   h__8->SetBinContent(23,115);
   h__8->SetBinContent(24,193);
   h__8->SetBinContent(25,243);
   h__8->SetBinContent(26,191);
   h__8->SetBinContent(27,115);
   h__8->SetBinContent(28,62);
   h__8->SetBinContent(29,23);
   h__8->SetBinContent(30,4);
   h__8->SetEntries(1000);
   h__8->SetStats(0);
   h__8->SetLineWidth(3);
   h__8->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__8->GetXaxis()->CenterTitle(true);
   h__8->GetXaxis()->SetLabelFont(42);
   h__8->GetXaxis()->SetTitleSize(0.04);
   h__8->GetXaxis()->SetTitleOffset(1.1);
   h__8->GetXaxis()->SetTitleFont(42);
   h__8->GetYaxis()->SetTitle("Trials");
   h__8->GetYaxis()->CenterTitle(true);
   h__8->GetYaxis()->SetNdivisions(4000510);
   h__8->GetYaxis()->SetLabelFont(42);
   h__8->GetYaxis()->SetTitleSize(0.04);
   h__8->GetYaxis()->SetTitleOffset(1.1);
   h__8->GetYaxis()->SetTitleFont(42);
   h__8->GetZaxis()->SetLabelFont(42);
   h__8->GetZaxis()->SetTitleOffset(1);
   h__8->GetZaxis()->SetTitleFont(42);
   h__8->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.3874
#pm0.001
");
   pt_LaTex = pt->AddText("0.034
#pm0.0008
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
