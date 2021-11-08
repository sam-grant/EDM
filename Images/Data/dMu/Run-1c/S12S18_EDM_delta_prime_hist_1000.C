void S12S18_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__81 = new TH1D("h__81","",53,0.05447613,1.127247);
   h__81->SetBinContent(23,2);
   h__81->SetBinContent(24,12);
   h__81->SetBinContent(25,81);
   h__81->SetBinContent(26,189);
   h__81->SetBinContent(27,279);
   h__81->SetBinContent(28,257);
   h__81->SetBinContent(29,108);
   h__81->SetBinContent(30,56);
   h__81->SetBinContent(31,12);
   h__81->SetBinContent(32,1);
   h__81->SetBinContent(33,3);
   h__81->SetEntries(1000);
   h__81->SetStats(0);
   h__81->SetLineWidth(3);
   h__81->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__81->GetXaxis()->CenterTitle(true);
   h__81->GetXaxis()->SetLabelFont(42);
   h__81->GetXaxis()->SetTitleSize(0.04);
   h__81->GetXaxis()->SetTitleOffset(1.1);
   h__81->GetXaxis()->SetTitleFont(42);
   h__81->GetYaxis()->SetTitle("Trials");
   h__81->GetYaxis()->CenterTitle(true);
   h__81->GetYaxis()->SetNdivisions(4000510);
   h__81->GetYaxis()->SetLabelFont(42);
   h__81->GetYaxis()->SetTitleSize(0.04);
   h__81->GetYaxis()->SetTitleOffset(1.1);
   h__81->GetYaxis()->SetTitleFont(42);
   h__81->GetZaxis()->SetLabelFont(42);
   h__81->GetZaxis()->SetTitleOffset(1);
   h__81->GetZaxis()->SetTitleFont(42);
   h__81->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.5975
#pm0.0009
");
   pt_LaTex = pt->AddText("0.029
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
