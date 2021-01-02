void y2_vs_theta_NSUBRUNS_325()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 27 09:19:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,0.3660647,443.8125,0.6981754);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1038[24] = {
   0.511813,
   0.4911114,
   0.4759697,
   0.4678109,
   0.4667997,
   0.4719367,
   0.4814118,
   0.4931197,
   0.5051938,
   0.5164203,
   0.5264251,
   0.5355951,
   0.544765,
   0.5547698,
   0.5659963,
   0.5780704,
   0.5897783,
   0.5992535,
   0.6043904,
   0.6033793,
   0.5952204,
   0.5800787,
   0.5593771,
   0.5355951};
   Double_t Graph0_fex1038[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1038[24] = {
   0.03671147,
   0.04908228,
   0.04152499,
   0.04156541,
   0.04538327,
   0.04145078,
   0.04037734,
   0.04171118,
   0.04395478,
   0.04052186,
   0.03797241,
   0.0368143,
   0.03373412,
   0.03843302,
   0.03998555,
   0.0415334,
   0.03963265,
   0.03651788,
   0.0343173,
   0.03944437,
   0.04212056,
   0.04351734,
   0.03907838,
   0.04040062};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","325 sub-runs",100,0,394.5);
   Graph_Graph01038->SetMinimum(0.3992758);
   Graph_Graph01038->SetMaximum(0.6649644);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("#LTy_{2}#GT [mm]");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("325 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
