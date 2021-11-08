void S12_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:47:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__85 = new TH1D("h__85","",53,-0.02755133,1.036163);
   h__85->SetBinContent(24,6);
   h__85->SetBinContent(25,58);
   h__85->SetBinContent(26,203);
   h__85->SetBinContent(27,334);
   h__85->SetBinContent(28,250);
   h__85->SetBinContent(29,110);
   h__85->SetBinContent(30,33);
   h__85->SetBinContent(31,3);
   h__85->SetBinContent(32,3);
   h__85->SetEntries(1000);
   h__85->SetStats(0);
   h__85->SetLineWidth(3);
   h__85->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__85->GetXaxis()->CenterTitle(true);
   h__85->GetXaxis()->SetLabelFont(42);
   h__85->GetXaxis()->SetTitleSize(0.04);
   h__85->GetXaxis()->SetTitleOffset(1.1);
   h__85->GetXaxis()->SetTitleFont(42);
   h__85->GetYaxis()->SetTitle("Trials");
   h__85->GetYaxis()->CenterTitle(true);
   h__85->GetYaxis()->SetNdivisions(4000510);
   h__85->GetYaxis()->SetLabelFont(42);
   h__85->GetYaxis()->SetTitleSize(0.04);
   h__85->GetYaxis()->SetTitleOffset(1.1);
   h__85->GetYaxis()->SetTitleFont(42);
   h__85->GetZaxis()->SetLabelFont(42);
   h__85->GetZaxis()->SetTitleOffset(1);
   h__85->GetZaxis()->SetTitleFont(42);
   h__85->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.5097
#pm0.0008
");
   pt_LaTex = pt->AddText("0.024
#pm0.0005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
