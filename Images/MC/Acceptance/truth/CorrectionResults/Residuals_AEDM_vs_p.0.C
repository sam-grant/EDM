void Residuals_AEDM_vs_p.0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 14:18:29 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__1 = new TH1D("h_res__1","No vertical offset corrections",20,-0.05,0.05);
   h_res__1->SetBinContent(6,4);
   h_res__1->SetBinContent(7,1);
   h_res__1->SetBinContent(9,1);
   h_res__1->SetBinContent(11,1);
   h_res__1->SetBinContent(13,1);
   h_res__1->SetEntries(8);
   h_res__1->SetStats(0);
   h_res__1->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   h_res__1->GetXaxis()->CenterTitle(true);
   h_res__1->GetXaxis()->SetLabelFont(42);
   h_res__1->GetXaxis()->SetTitleSize(0.04);
   h_res__1->GetXaxis()->SetTitleOffset(1.1);
   h_res__1->GetXaxis()->SetTitleFont(42);
   h_res__1->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   h_res__1->GetYaxis()->CenterTitle(true);
   h_res__1->GetYaxis()->SetNdivisions(4000510);
   h_res__1->GetYaxis()->SetLabelFont(42);
   h_res__1->GetYaxis()->SetTitleSize(0.04);
   h_res__1->GetYaxis()->SetTitleOffset(1.1);
   h_res__1->GetYaxis()->SetTitleFont(42);
   h_res__1->GetZaxis()->SetLabelFont(42);
   h_res__1->GetZaxis()->SetTitleOffset(1);
   h_res__1->GetZaxis()->SetTitleFont(42);
   h_res__1->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.012
#pm0.003
");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#sigma [mrad]");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
