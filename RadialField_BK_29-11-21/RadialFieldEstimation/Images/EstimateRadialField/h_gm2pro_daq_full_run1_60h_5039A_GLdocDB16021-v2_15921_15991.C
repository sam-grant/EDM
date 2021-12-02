void h_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2_15921_15991()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 28 16:10:54 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *hist__1 = new TH1D("hist__1","",100,-50,50);
   hist__1->SetBinContent(52,61);
   hist__1->SetEntries(61);
   hist__1->SetStats(0);
   hist__1->SetFillColor(1);
   hist__1->SetFillStyle(3001);
   hist__1->GetXaxis()->SetTitle("#Delta#LTy_{calo}#GT [mm]");
   hist__1->GetXaxis()->CenterTitle(true);
   hist__1->GetXaxis()->SetLabelFont(42);
   hist__1->GetXaxis()->SetLabelSize(0.035);
   hist__1->GetXaxis()->SetTitleOffset(1.1);
   hist__1->GetXaxis()->SetTitleFont(42);
   hist__1->GetYaxis()->SetTitle("Runs");
   hist__1->GetYaxis()->CenterTitle(true);
   hist__1->GetYaxis()->SetNdivisions(4000510);
   hist__1->GetYaxis()->SetLabelFont(42);
   hist__1->GetYaxis()->SetLabelSize(0.035);
   hist__1->GetYaxis()->SetTitleOffset(1.1);
   hist__1->GetYaxis()->SetTitleFont(42);
   hist__1->GetZaxis()->SetLabelFont(42);
   hist__1->GetZaxis()->SetLabelSize(0.035);
   hist__1->GetZaxis()->SetTitleSize(0.035);
   hist__1->GetZaxis()->SetTitleFont(42);
   hist__1->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   TText *pt_LaTex = pt->AddText("1.29
#pm0.01
");
   pt_LaTex = pt->AddText("0.103
#pm0.009
");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   pt_LaTex = pt->AddText("#LT#Deltay#GT [mm]");
   pt_LaTex = pt->AddText("#sigma [mm]");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
