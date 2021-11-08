void S12_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__79 = new TH1D("h__79","",54,0.06521175,1.147242);
   h__79->SetBinContent(24,11);
   h__79->SetBinContent(25,61);
   h__79->SetBinContent(26,161);
   h__79->SetBinContent(27,252);
   h__79->SetBinContent(28,266);
   h__79->SetBinContent(29,149);
   h__79->SetBinContent(30,71);
   h__79->SetBinContent(31,23);
   h__79->SetBinContent(32,3);
   h__79->SetBinContent(33,1);
   h__79->SetBinContent(34,2);
   h__79->SetEntries(1000);
   h__79->SetStats(0);
   h__79->SetLineWidth(3);
   h__79->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__79->GetXaxis()->CenterTitle(true);
   h__79->GetXaxis()->SetLabelFont(42);
   h__79->GetXaxis()->SetTitleSize(0.04);
   h__79->GetXaxis()->SetTitleOffset(1.1);
   h__79->GetXaxis()->SetTitleFont(42);
   h__79->GetYaxis()->SetTitle("Trials");
   h__79->GetYaxis()->CenterTitle(true);
   h__79->GetYaxis()->SetNdivisions(4000510);
   h__79->GetYaxis()->SetLabelFont(42);
   h__79->GetYaxis()->SetTitleSize(0.04);
   h__79->GetYaxis()->SetTitleOffset(1.1);
   h__79->GetYaxis()->SetTitleFont(42);
   h__79->GetZaxis()->SetLabelFont(42);
   h__79->GetZaxis()->SetTitleOffset(1);
   h__79->GetZaxis()->SetTitleFont(42);
   h__79->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.608
#pm0.0009
");
   pt_LaTex = pt->AddText("0.029
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
