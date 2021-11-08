void S12S18_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:47:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__87 = new TH1D("h__87","",52,-0.02512468,1.033634);
   h__87->SetBinContent(23,3);
   h__87->SetBinContent(24,21);
   h__87->SetBinContent(25,143);
   h__87->SetBinContent(26,265);
   h__87->SetBinContent(27,330);
   h__87->SetBinContent(28,162);
   h__87->SetBinContent(29,55);
   h__87->SetBinContent(30,17);
   h__87->SetBinContent(31,3);
   h__87->SetBinContent(32,1);
   h__87->SetEntries(1000);
   h__87->SetStats(0);
   h__87->SetLineWidth(3);
   h__87->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__87->GetXaxis()->CenterTitle(true);
   h__87->GetXaxis()->SetLabelFont(42);
   h__87->GetXaxis()->SetTitleSize(0.04);
   h__87->GetXaxis()->SetTitleOffset(1.1);
   h__87->GetXaxis()->SetTitleFont(42);
   h__87->GetYaxis()->SetTitle("Trials");
   h__87->GetYaxis()->CenterTitle(true);
   h__87->GetYaxis()->SetNdivisions(4000510);
   h__87->GetYaxis()->SetLabelFont(42);
   h__87->GetYaxis()->SetTitleSize(0.04);
   h__87->GetYaxis()->SetTitleOffset(1.1);
   h__87->GetYaxis()->SetTitleFont(42);
   h__87->GetZaxis()->SetLabelFont(42);
   h__87->GetZaxis()->SetTitleOffset(1);
   h__87->GetZaxis()->SetTitleFont(42);
   h__87->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.5084
#pm0.0008
");
   pt_LaTex = pt->AddText("0.025
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
