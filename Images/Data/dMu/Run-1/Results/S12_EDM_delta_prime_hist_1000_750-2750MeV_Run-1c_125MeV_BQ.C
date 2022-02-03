void S12_EDM_delta_prime_hist_1000_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:53:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__13 = new TH1D("h__13","S12",21,0.3884744,0.8232358);
   h__13->SetBinContent(5,1);
   h__13->SetBinContent(6,5);
   h__13->SetBinContent(7,15);
   h__13->SetBinContent(8,71);
   h__13->SetBinContent(9,126);
   h__13->SetBinContent(10,134);
   h__13->SetBinContent(11,174);
   h__13->SetBinContent(12,143);
   h__13->SetBinContent(13,104);
   h__13->SetBinContent(14,98);
   h__13->SetBinContent(15,56);
   h__13->SetBinContent(16,32);
   h__13->SetBinContent(17,20);
   h__13->SetBinContent(18,10);
   h__13->SetBinContent(19,3);
   h__13->SetBinContent(20,2);
   h__13->SetBinContent(21,2);
   h__13->SetBinContent(22,4);
   h__13->SetEntries(1000);
   h__13->SetStats(0);
   h__13->SetLineWidth(3);
   h__13->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__13->GetXaxis()->CenterTitle(true);
   h__13->GetXaxis()->SetLabelFont(42);
   h__13->GetXaxis()->SetTitleSize(0.04);
   h__13->GetXaxis()->SetTitleOffset(1.1);
   h__13->GetXaxis()->SetTitleFont(42);
   h__13->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__13->GetYaxis()->CenterTitle(true);
   h__13->GetYaxis()->SetNdivisions(4000510);
   h__13->GetYaxis()->SetLabelFont(42);
   h__13->GetYaxis()->SetTitleSize(0.04);
   h__13->GetYaxis()->SetTitleOffset(1.1);
   h__13->GetYaxis()->SetTitleFont(42);
   h__13->GetZaxis()->SetLabelFont(42);
   h__13->GetZaxis()->SetTitleOffset(1);
   h__13->GetZaxis()->SetTitleFont(42);
   h__13->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.6185
#pm0.002
");
   pt_LaTex = pt->AddText("0.052
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
