void S0S12S18_c_vs_p_pmin_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-0.3587788,2600,-0.008099371);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1403[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1403[9] = {
   -0.2954084,
   -0.282573,
   -0.2505676,
   -0.2200535,
   -0.1890588,
   -0.1468705,
   -0.1133188,
   -0.07902666,
   -0.09474605};
   Double_t Graph0_fex1403[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1403[9] = {
   0.004923752,
   0.006948309,
   0.007050561,
   0.007344269,
   0.007856433,
   0.008678123,
   0.01004986,
   0.01248072,
   0.01805986};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1403,Graph0_fy1403,Graph0_fex1403,Graph0_fey1403);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01403 = new TH1F("Graph_Graph01403","S0S12S18",100,440,2360);
   Graph_Graph01403->SetMinimum(-0.3237108);
   Graph_Graph01403->SetMaximum(-0.04316731);
   Graph_Graph01403->SetDirectory(0);
   Graph_Graph01403->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01403->SetLineColor(ci);
   Graph_Graph01403->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_Graph01403->GetXaxis()->CenterTitle(true);
   Graph_Graph01403->GetXaxis()->SetLabelFont(42);
   Graph_Graph01403->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01403->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01403->GetXaxis()->SetTitleFont(42);
   Graph_Graph01403->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01403->GetYaxis()->CenterTitle(true);
   Graph_Graph01403->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01403->GetYaxis()->SetLabelFont(42);
   Graph_Graph01403->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01403->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01403->GetYaxis()->SetTitleFont(42);
   Graph_Graph01403->GetZaxis()->SetLabelFont(42);
   Graph_Graph01403->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01403->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01403);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
