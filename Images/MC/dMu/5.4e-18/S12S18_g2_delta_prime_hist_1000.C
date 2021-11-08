void S12S18_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__65 = new TH1D("h__65","",50,-0.5137731,0.4964316);
   h__65->SetBinContent(23,9);
   h__65->SetBinContent(24,374);
   h__65->SetBinContent(25,589);
   h__65->SetBinContent(26,28);
   h__65->SetEntries(1000);
   h__65->SetStats(0);
   h__65->SetLineWidth(3);
   h__65->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__65->GetXaxis()->CenterTitle(true);
   h__65->GetXaxis()->SetLabelFont(42);
   h__65->GetXaxis()->SetTitleSize(0.04);
   h__65->GetXaxis()->SetTitleOffset(1.1);
   h__65->GetXaxis()->SetTitleFont(42);
   h__65->GetYaxis()->SetTitle("Trials");
   h__65->GetYaxis()->CenterTitle(true);
   h__65->GetYaxis()->SetNdivisions(4000510);
   h__65->GetYaxis()->SetLabelFont(42);
   h__65->GetYaxis()->SetTitleSize(0.04);
   h__65->GetYaxis()->SetTitleOffset(1.1);
   h__65->GetYaxis()->SetTitleFont(42);
   h__65->GetZaxis()->SetLabelFont(42);
   h__65->GetZaxis()->SetTitleOffset(1);
   h__65->GetZaxis()->SetTitleFont(42);
   h__65->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.02618
#pm0.0003
");
   pt_LaTex = pt->AddText("0.0095
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
