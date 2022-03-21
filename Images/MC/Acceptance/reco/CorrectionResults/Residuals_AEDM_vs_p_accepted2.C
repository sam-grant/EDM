void Residuals_AEDM_vs_p_accepted2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 17 02:57:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__1 = new TH1D("h_res__1","Simple acceptance weighting",25,-0.15,0.15);
   h_res__1->SetBinContent(9,1);
   h_res__1->SetBinContent(14,2);
   h_res__1->SetBinContent(17,1);
   h_res__1->SetBinContent(18,1);
   h_res__1->SetBinContent(19,1);
   h_res__1->SetBinContent(20,1);
   h_res__1->SetBinContent(22,1);
   h_res__1->SetEntries(8);
   h_res__1->SetStats(0);
   h_res__1->GetXaxis()->SetTitle("Residuals [mrad]");
   h_res__1->GetXaxis()->CenterTitle(true);
   h_res__1->GetXaxis()->SetLabelFont(42);
   h_res__1->GetXaxis()->SetTitleSize(0.04);
   h_res__1->GetXaxis()->SetTitleOffset(1.1);
   h_res__1->GetXaxis()->SetTitleFont(42);
   h_res__1->GetYaxis()->SetTitle("Entries");
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
   TText *pt_LaTex = pt->AddText("0.04
#pm0.01
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
