void S12_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__82 = new TH1D("h__82","",50,-0.4784992,0.5271523);
   h__82->SetBinContent(25,19);
   h__82->SetBinContent(26,830);
   h__82->SetBinContent(27,151);
   h__82->SetEntries(1000);
   h__82->SetStats(0);
   h__82->SetLineWidth(3);
   h__82->GetXaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   h__82->GetXaxis()->CenterTitle(true);
   h__82->GetXaxis()->SetLabelFont(42);
   h__82->GetXaxis()->SetTitleSize(0.04);
   h__82->GetXaxis()->SetTitleOffset(1.1);
   h__82->GetXaxis()->SetTitleFont(42);
   h__82->GetYaxis()->SetTitle("Trials");
   h__82->GetYaxis()->CenterTitle(true);
   h__82->GetYaxis()->SetNdivisions(4000510);
   h__82->GetYaxis()->SetLabelFont(42);
   h__82->GetYaxis()->SetTitleSize(0.04);
   h__82->GetYaxis()->SetTitleOffset(1.1);
   h__82->GetYaxis()->SetTitleFont(42);
   h__82->GetZaxis()->SetLabelFont(42);
   h__82->GetZaxis()->SetTitleOffset(1);
   h__82->GetZaxis()->SetTitleFont(42);
   h__82->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.03791
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0066
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
