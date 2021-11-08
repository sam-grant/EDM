void S12_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__73 = new TH1D("h__73","",51,-0.2035294,0.8164713);
   h__73->SetBinContent(24,6);
   h__73->SetBinContent(25,105);
   h__73->SetBinContent(26,389);
   h__73->SetBinContent(27,385);
   h__73->SetBinContent(28,95);
   h__73->SetBinContent(29,19);
   h__73->SetBinContent(30,1);
   h__73->SetEntries(1000);
   h__73->SetStats(0);
   h__73->SetLineWidth(3);
   h__73->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__73->GetXaxis()->CenterTitle(true);
   h__73->GetXaxis()->SetLabelFont(42);
   h__73->GetXaxis()->SetTitleSize(0.04);
   h__73->GetXaxis()->SetTitleOffset(1.1);
   h__73->GetXaxis()->SetTitleFont(42);
   h__73->GetYaxis()->SetTitle("Trials");
   h__73->GetYaxis()->CenterTitle(true);
   h__73->GetYaxis()->SetNdivisions(4000510);
   h__73->GetYaxis()->SetLabelFont(42);
   h__73->GetYaxis()->SetTitleSize(0.04);
   h__73->GetYaxis()->SetTitleOffset(1.1);
   h__73->GetYaxis()->SetTitleFont(42);
   h__73->GetZaxis()->SetLabelFont(42);
   h__73->GetZaxis()->SetTitleOffset(1);
   h__73->GetZaxis()->SetTitleFont(42);
   h__73->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.3166
#pm0.0005
");
   pt_LaTex = pt->AddText("0.017
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
