void S18_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__64 = new TH1D("h__64","",51,-0.4188779,0.6168383);
   h__64->SetBinContent(22,1);
   h__64->SetBinContent(23,32);
   h__64->SetBinContent(24,264);
   h__64->SetBinContent(25,463);
   h__64->SetBinContent(26,209);
   h__64->SetBinContent(27,30);
   h__64->SetBinContent(28,1);
   h__64->SetEntries(1000);
   h__64->SetStats(0);
   h__64->SetLineWidth(3);
   h__64->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__64->GetXaxis()->CenterTitle(true);
   h__64->GetXaxis()->SetLabelFont(42);
   h__64->GetXaxis()->SetTitleSize(0.04);
   h__64->GetXaxis()->SetTitleOffset(1.1);
   h__64->GetXaxis()->SetTitleFont(42);
   h__64->GetYaxis()->SetTitle("Trials");
   h__64->GetYaxis()->CenterTitle(true);
   h__64->GetYaxis()->SetNdivisions(4000510);
   h__64->GetYaxis()->SetLabelFont(42);
   h__64->GetYaxis()->SetTitleSize(0.04);
   h__64->GetYaxis()->SetTitleOffset(1.1);
   h__64->GetYaxis()->SetTitleFont(42);
   h__64->GetZaxis()->SetLabelFont(42);
   h__64->GetZaxis()->SetTitleOffset(1);
   h__64->GetZaxis()->SetTitleFont(42);
   h__64->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.07777
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
