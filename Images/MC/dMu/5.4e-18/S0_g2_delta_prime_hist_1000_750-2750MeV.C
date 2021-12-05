void S0_g2_delta_prime_hist_1000_750-2750MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:12:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__66 = new TH1D("h__66","",50,-0.5000965,0.5036077);
   h__66->SetBinContent(22,8);
   h__66->SetBinContent(23,135);
   h__66->SetBinContent(24,571);
   h__66->SetBinContent(25,266);
   h__66->SetBinContent(26,20);
   h__66->SetEntries(1000);
   h__66->SetStats(0);
   h__66->SetLineWidth(3);
   h__66->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__66->GetXaxis()->CenterTitle(true);
   h__66->GetXaxis()->SetLabelFont(42);
   h__66->GetXaxis()->SetTitleSize(0.04);
   h__66->GetXaxis()->SetTitleOffset(1.1);
   h__66->GetXaxis()->SetTitleFont(42);
   h__66->GetYaxis()->SetTitle("Trials");
   h__66->GetYaxis()->CenterTitle(true);
   h__66->GetYaxis()->SetNdivisions(4000510);
   h__66->GetYaxis()->SetLabelFont(42);
   h__66->GetYaxis()->SetTitleSize(0.04);
   h__66->GetYaxis()->SetTitleOffset(1.1);
   h__66->GetYaxis()->SetTitleFont(42);
   h__66->GetZaxis()->SetLabelFont(42);
   h__66->GetZaxis()->SetTitleOffset(1);
   h__66->GetZaxis()->SetTitleFont(42);
   h__66->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.02543
#pm0.0004
");
   pt_LaTex = pt->AddText("0.013
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
